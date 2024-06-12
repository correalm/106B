#include "CppUTest/TestHarness.h"
#include <CppUTest/UtestMacros.h>
#include "../../include/gauss_sum.h"

TEST_GROUP(GaussSum) {};

TEST(GaussSum, RigthAnswer) {
    CHECK_EQUAL(5050, gauss_sum());
}
