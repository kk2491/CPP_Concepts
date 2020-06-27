// Text Fixtures 
// In every test case, Object of the Class would be created (In arrange block)
// To avoid this - Text Fixture is used 


#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class MyClass {

	int baseValue;

public:
	MyClass(int _bv) : baseValue(_bv) {}

	void Increment(int byValue) {
		baseValue += byValue;
	}

	int getValue() {
		return baseValue;
	}
};


struct MyClassTest : public testing::Test {
	
	MyClass *mc;

	void SetUp() {
		mc = new MyClass(100);
	}

	void TearDown() {
		delete mc;
	}
};


TEST_F(MyClassTest, Increment_by_5) {

	// Act
	mc->Increment(5);

	// Assert
	ASSERT_EQ(mc->getValue(), 105);
}

TEST_F(MyClassTest, Increment_by_10) {

	// Act
	mc->Increment(10);

	// Assert
	ASSERT_EQ(mc->getValue(), 110);
}


int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}