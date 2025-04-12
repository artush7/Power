#include <gtest/gtest.h>
#include </home/artush/#main(linux)/c++ project/homework/Power/src/func.h>

TEST(Power,0_1)
{
    EXPECT_EQ(power(0, 1),0);
}
TEST(Power,0_7)
{
    EXPECT_EQ(power(0, 7),0);
}
TEST(Power,0_100)
{
    EXPECT_EQ(power(0, 100),0);
}
TEST(Power,1_0)
{
    EXPECT_EQ(power(1, 0),1);
}
TEST(Power,5_0)
{
    EXPECT_EQ(power(5, 0),1);
}
TEST(Power,25_0)
{
    EXPECT_EQ(power(25, 0),1);
}
TEST(Power,1_1)
{
    EXPECT_EQ(power(1, 1),1);
}
TEST(Power,1_4)
{
    EXPECT_EQ(power(1, 4),1);
}
TEST(Power,2_2)
{
    EXPECT_EQ(power(2, 2),4);
}
TEST(Power,2_4)
{
    EXPECT_EQ(power(2, 4),16);
}
TEST(Power,3_3)
{
    EXPECT_EQ(power(3, 3),27);
}
TEST(Power,4_4)
{
    EXPECT_EQ(power(4,4),256);
}
TEST(Power,5_5)
{
    EXPECT_EQ(power(5,5),3125);
}
TEST(Power,6_7)
{
    EXPECT_EQ(power(6,7),279936);
}
TEST(Power,9_8)
{
    EXPECT_EQ(power(9,8),43046721);
}
TEST(Power,minus2_5)
{
    EXPECT_EQ(power(-2,5),-32);
}
TEST(Power,minus3_4)
{
    EXPECT_EQ(power(-3,4),81);
}
TEST(Power,minus5_3)
{
    EXPECT_EQ(power(-5,3),-125);
}
TEST(Power,2_minus3)
{
    EXPECT_EQ(power(2,-3),1/8);
}
TEST(Power,3_minus3)
{
    EXPECT_EQ(power(3,-3),1/27);
}
TEST(Power,5_minus5)
{
    EXPECT_EQ(power(5,-5),1/3125);
}
TEST(Power,minus2_minus6)
{
    EXPECT_EQ(power(-2,-6),-(1/64));
}
TEST(Power,minus4_minus5)
{
    EXPECT_EQ(power(-4,-5),-(1/1024));
}
TEST(Power,minus7_minus7)
{
    EXPECT_EQ(power(-7,-7),-(1/823543));
}


