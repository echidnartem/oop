#include <gtest/gtest.h>
#include "../include/anti_troll.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(anti_troll("Hello, world!")=="Hll, wrld!");
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(anti_troll("Like a shoes")=="Lk  shs");
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(anti_troll("A troll")==" trll");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}