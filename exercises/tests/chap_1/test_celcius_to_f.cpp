#include "CppUTest/TestHarness.h"
#include <CppUTest/UtestMacros.h>
#include "../../include/celcius_to_f.h"

TEST_GROUP(CelciusToF) {};

TEST(CelciusToF, SomeCelciusTemp) {
    DOUBLES_EQUAL(60.8, celcius_to_f(16.0), 0.001);
}

TEST(CelciusToF, ZeroCelcius) {
    DOUBLES_EQUAL(32.0, celcius_to_f(0), 0.001);
}

TEST(CelciusToF, OneHundredCelcius) {
    DOUBLES_EQUAL(212, celcius_to_f(100), 0.001);
}
