#include <gtest/gtest.h>
#include "basic.h"

TEST(testCase, test0)
{
    EXPECT_EQ(add(2, 3), 5);
}

int main(int argc, char **argv)
{
 testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
