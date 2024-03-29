
#include <gtest/gtest.h>
#include "seaViewHomes.cpp"

TEST(seaView, test1) 
{
    std::vector<int> v;
    ASSERT_TRUE(v.empty());
}
TEST(seaView, Test2)
{
    std::vector<int> Heights1 = { 1,3,2 };
    std::vector<int> res = {1,2 };
    ASSERT_EQ(res, seaView(Heights1));
}
TEST(seaView, test3)
{
    std::vector<int> Heights2 = { 4,3,2,1 };
    std::vector<int> res = { 0,1,2,3 };

    ASSERT_EQ(res, seaView(Heights2));
}
TEST(seaView, test4)
{
    std::vector<int> Heights3 = { 1,3,2,4 };
    std::vector<int> res = { 3 };

    ASSERT_EQ(res, seaView(Heights3));
}
TEST(seaView, test5)
{
    std::vector<int>Heights4 = { 5,2,7,3,6 };
    std::vector<int> res = { 2,4 };

    ASSERT_EQ(res, seaView(Heights4));
}

TEST(seaView, test6)
{
    std::vector<int>Heights5 = { 3,3,3 };
    std::vector<int> res = { 2};

    ASSERT_EQ(res, seaView(Heights5));
}
TEST(seaView, test7)
{
    std::vector<int>Heights6 = { 15 }; 
    std::vector<int> res = { 0 };

    ASSERT_EQ(res, seaView(Heights6));
}
TEST(seaView, test8)
{
    std::vector<std::string>Heights = { "1","2","3" };
    ASSERT_THROW(seaView(Heights), std::invalid_argument);
}
TEST(seaView, test9)
{
    std::vector<int>Heights = { -1, -3 };
    ASSERT_THROW(seaView(Heights), std::invalid_argument);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
