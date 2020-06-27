// Assertions
// Success
// Non-Fatal Failure - Execution of code does not stop
// Fatal Failure	 - Execution of code stops at that point 

// ASSERT_TRUE
// ASSERT_FALSE

// ASSERT_EQ 	- Leads to Fatal Failure
// EXPECT_EQ 	- Leads to Non Fatal Failure

// ASSERT_NE 	- Not equal to
// EXPECT_NE

// EXPECT_LT 	- Less than
// ASSERT_LT 

// EXPECT_LE 	- Less than equal to 
// ASSERT_LE 	

// EXPECT_GT	- Greater than
// EXPECT_GE

// EXPECT  		- Non Fatal
// ASSERT  		- Fatal

// ASSERT_STREQ - String comparison
// EXPECT_STREQ 

// ASSERT_STRNE	- String not equal to
// EXPECT_STRNE

// ASSERT_STRCASEEQ	- String case
// EXPECT_STRCASEEQ 


// Fatal and Non-Fatal

#include <iostream>
#include <gtest/gtest.h>

using namespace std;

// Fatal
TEST(Fatal_Test, Test_Case_1) {

	ASSERT_TRUE(1 == 2);
	cout << "After assertion - Fatal_Test - Test_Case_1" << endl;
}

TEST(Fatal_Test, Test_Case_2) {

	ASSERT_TRUE(1 == 1);
	cout << "After assertion - Fatal_Test - Test_Case_2" << endl;
}


TEST(Non_Fatal_Test, Test_Case_1) {

	EXPECT_EQ(1, 2);
	cout << "After assertion - Non_Fatal_Test - Test_Case_1" << endl;
}

TEST(Non_Fatal_Test, Test_Case_2) {
	EXPECT_EQ(1, 1);
	cout << "After assertion - Non_Fatal_Test - Test_Case_2" << endl;
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}