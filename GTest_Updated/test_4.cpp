#include <iostream>
#include <gtest/gtest.h>
//#include <string.h>

using namespace std;

class TestClass {
	
	string id;

	public:
		TestClass(string _id) : id(_id) {}
		string GetId() { return id;}
};


TEST(Test_1, increment_by_5) {

	// Arrange
	TestClass mc("root");

	// Act
	string value = mc.GetId();

	// Assert
	ASSERT_STREQ(value.c_str(), "root");

	// EXPECT_STREQ(value.c_str(), "root");

}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}



