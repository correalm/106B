#include "CppUTest/TestHarness.h"
#include <CppUTest/UtestMacros.h>
#include "../../include/sum_odds.h"

TEST_GROUP(SumOdds) {};

TEST(SumOdds, SumOddsOf3) {
    CHECK_EQUAL(4, sum_odds(3));
}

TEST(SumOdds, SumOddsOf7) {
    CHECK_EQUAL(16, sum_odds(7));
}

TEST(SumOdds, SumOddsOf0) {
    CHECK_EQUAL(0, sum_odds(0));
}

TEST(SumOdds, NegativeInputReturns0) {
    CHECK_EQUAL(0, sum_odds(0));
}
