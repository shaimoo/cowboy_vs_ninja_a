#define TEST
#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;
TEST_SUITE("Point"){
    TEST_CASE("Point constructor") {
        Point temp(73.5, 563.4);
        CHECK(temp.getX() == 73.5);
        CHECK(temp.getY() == 563.4);
    }

    TEST_CASE("distance func") {
        ariel::Point point1(1, 1);
        ariel::Point point2(2, 2);
        CHECK(point1.distance(point2) == 1);
        CHECK(point2.distance(point1) == 1);
        CHECK(point1.distance(point1) == 0);
    }

    TEST_CASE("moveTowards func") {
        ariel::Point point1(0, 0);
        ariel::Point point2(3, 4);
        point1.moveTowards(point2);
    }
}