#include "square_root.cpp"
#include <gtest/gtest.h>

TEST(SquarerootTest, PositiveNum){
	ASSERT_EQ(6.0, FindSquareroot(36.0));
	ASSERT_EQ(1.0, FindSquareroot(1.0));
	ASSERT_EQ(3.0, FindSquareroot(10.0));
}


TEST(SquarerootTest, NegativeNum){
	ASSERT_EQ(9.0, FindSquareroot(-100));
	ASSERT_EQ(-1.0, FindSquareroot(-2));
}

TEST(SquarerootTest, Zero){
	ASSERT_EQ(0.0, FindSquareroot(0));
	ASSERT_EQ(10.0, FindSquareroot(0));
}

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}