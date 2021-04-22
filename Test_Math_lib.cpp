#include "Math_LIB.cpp"
#include<gtest/gtest.h>

TEST(ceil, PositiveNO)
    {
        ASSERT_EQ (8,ceil_func(7.987));
        ASSERT_EQ (2,ceil_func(1.2));
    }



TEST(ceil, NegativeNO)
    {
        ASSERT_EQ (-8,ceil_func(-8.987));
        ASSERT_EQ (-2,ceil_func(-2.2));
    }

TEST(floor, NegativeNO)
    {
        ASSERT_EQ (-3,floor_func(-2.8));
        ASSERT_EQ (-3,floor_func(-2.3));
    }
TEST(floor, PositiveNo)
    {
        ASSERT_EQ (1,floor_func(1.6));
        ASSERT_EQ (1,floor_func(1.2));
    }
TEST(logfunction, SingleTest)
    {
        ASSERT_EQ (0.9542,int(log_func(9)));
        ASSERT_EQ (0.6989,int(log_func(5)));
    }
TEST(SquareRootTest, PositiveNos) 
    { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
    }
 
TEST(SquareRootTest, NegativeNos) 
    {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
    }

TEST(powertest,SingleTest)
    {
        ASSERT_EQ(64,pow_func(8,2));
        ASSERT_EQ(9.097324,pow_func(3.05,1.98));
    }
TEST(modfunction, SingleTEST)
    {
        ASSERT_EQ(.7123456,modf_func(5.7123456));
        ASSERT_EQ(.456,modf_func(8.456));
    }
TEST(addnumber , PositiveNO)
    {
        ASSERT_EQ(5,add_func(2,3));
        ASSERT_EQ(78,add_func(70,8));
    }
TEST(addnumber , NegativeNO)
    {
        ASSERT_EQ(-2,add_func(-8,6));
        ASSERT_EQ(2,add_func(-10,12));
    }
TEST(subnumber , PositiveNO)
    {
        ASSERT_EQ(5,sub_func(10,5));
        ASSERT_EQ(78,add_func(100,22));
    }

TEST(subnumber , NegativeNO)
    {
        ASSERT_EQ(-15,sub_func(-10,5));
        ASSERT_EQ(-122,add_func(-100,22));
    }
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
