// https://projecteuler.net/problem=1
// time complexity -> O(1000), space complexity -> O(1)
#include <stdio.h>

int main() {
  int sum = 0;

  for (int i = 0; i < 1000; i++) {
    // if the number is divided by 3 or 5, then update the sum
    if (!(i % 3) || !(i % 5)) 
      sum += i;
  }

  printf("Sum: %d \n", sum);
  return 0;
}
