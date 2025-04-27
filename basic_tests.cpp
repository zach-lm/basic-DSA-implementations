#include <gtest/gtest.h>

// Basic test to verify GTest is working
TEST(BasicTest, AssertionWorks)
{
    EXPECT_TRUE(true);
    EXPECT_FALSE(false);
    EXPECT_EQ(2, 1 + 1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
