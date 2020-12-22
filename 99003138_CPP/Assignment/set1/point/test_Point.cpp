#include "Point.h"
#include <gtest/gtest.h>
#include <cmath>
namespace{
TEST(Point,Empty_Constructor) {
    Point P1;
    EXPECT_EQ(0.0,P1.distanceFromOrigin());
    EXPECT_EQ(true,P1.isOrigin());
    EXPECT_EQ(false,P1.isOnXAxis());
    EXPECT_EQ(false,P1.isOnYAxis());
}

TEST(Point,Parameterized_Cosnstructor) {
    Point P1(5,12);
    EXPECT_EQ(13.0,P1.distanceFromOrigin());
    EXPECT_EQ(1,P1.quadrant());
    EXPECT_EQ(false,P1.isOrigin());
    EXPECT_EQ(false,P1.isOnXAxis());
    EXPECT_EQ(false,P1.isOnYAxis());

}

TEST(Point,Copy_Cosnstructor) {
    Point P2(-5,-12);
    Point P3(P2);
    EXPECT_EQ(13,P3.distanceFromOrigin());
    EXPECT_EQ(3,P3.quadrant());
    EXPECT_EQ(false,P3.isOrigin());
    EXPECT_EQ(false,P3.isOnXAxis());
    EXPECT_EQ(false,P3.isOnYAxis());

}
}

