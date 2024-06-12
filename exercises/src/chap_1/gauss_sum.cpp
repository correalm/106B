#include "../../include/gauss_sum.h"

int gauss_sum() {
  int result = 0;

  for (int i = 1; i <= 100; i++) {
    result += i;
  }

  return result;
}
