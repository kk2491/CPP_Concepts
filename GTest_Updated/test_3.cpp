// Writing test cases
// 1. Arrange	- Arrange everything required to run test
// 2. Act		- Run the test
// 3. Assert	- Verify the output


// Test cases should be independant 

#include <iostream>
#include <gtest/gtest.h>


TEST(Test_1, increment_by_5) {

	// Arrange
	int value = 100;
	int increment = 5;

	// Act
	value = value + increment;

	// Assert
	ASSERT_EQ(value, 105);

}


TEST(Test_1, increment_by_10) {

	// Arrange
	int value = 100;
	int increment = 10;

	// Act
	value = value + increment;

	// Assert
	ASSERT_EQ(value, 105);

}


int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}

