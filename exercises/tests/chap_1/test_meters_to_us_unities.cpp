#include "CppUTest/TestHarness.h"
#include <CppUTest/UtestMacros.h>
#include "../../include/meters_to_us_unities.h"

TEST_GROUP(MetersToUSUnities) {};

TEST(MetersToUSUnities, OneMeterToFeet) {
    DOUBLES_EQUAL(3.28084, meters_to_us_unities(1, "feet"), 0.0001);
}

TEST(MetersToUSUnities, OneMeterToInches) {
    DOUBLES_EQUAL(39.3701, meters_to_us_unities(1, "inches"), 0.0001);
}

TEST(MetersToUSUnities, UnknownUnity) {
    DOUBLES_EQUAL(0, meters_to_us_unities(1, "foo"), 0.0001);
}
