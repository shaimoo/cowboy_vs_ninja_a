#define TEST
#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;
TEST_SUITE("Point"){
    TEST_CASE("Point constructor") {
        Point temp(73.5, 563.4);
        CHECK_EQ(temp.getx() , 73.5);
        CHECK_EQ(temp.gety() , 563.4);
    }

    TEST_CASE("distance func") {
        ariel::Point point1(1, 1);
        ariel::Point point2(2, 2);
        CHECK_EQ(point1.distance(point2) , 1);
        CHECK_EQ(point2.distance(point1) , 1);
        CHECK_EQ(point1.distance(point1) , 0);
    }

    TEST_CASE("moveTowards")
    {
        ariel::Point point1(1, 1);
        ariel::Point point2(2, 2);
        Point point3 = point1.moveTowards(point1,point2,2);
        CHECK_EQ(point3.getx() , 0);
        CHECK_EQ(point3.gety(),1);
    }
    TEST_CASE()
}