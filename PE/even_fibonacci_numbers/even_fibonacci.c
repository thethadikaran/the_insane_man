#include <stdio.h>

#define FOUR_MILLION  4000000

int main() {
  long long curr = 1, prev = 0, sum = 0;

  while (curr < FOUR_MILLION) {
    long long tmp = curr;
    curr += prev;
    prev = tmp;

    // calculate sum
    if (curr % 2 == 0) sum += curr;
  }

  printf("Sum of even-values terms: %lld \n", sum);
  return 0;
}
