#include <iostream>
#include <gtest/gtest.h>

using namespace std;


TEST(TestName_1, Subtest_1) {
	ASSERT_TRUE(2 == 1);
}

TEST(TestName_1, Subtest_2) {
	ASSERT_FALSE(2 == 2);
}

TEST(TestName_2, Subtest_1) {
	ASSERT_TRUE(2 == 2);
}

TEST(TestName_2, Subtest_2) {
	ASSERT_FALSE(2 == 1);
}

int main(int argc, char **argv) {

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();

}