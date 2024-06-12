#include "../../include/sum_odds.h"

int sum_odds(int value) {
  int result = 0;

  if (value < 0) return result;


  for (int i = 0; i <= value; i++) {
    if (i % 2 != 0) result += i;
  }

  return result;
}
