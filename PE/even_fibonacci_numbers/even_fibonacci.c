// https://projecteuler.net/problem=2
#include <stdio.h>
#include <math.h>

#define FOUR_MILLION  4000000


// Method - 01 (BRUTE FORCE)
// time complexity -> O(N), space complexity -> O(1)
long long brute_force() {
  long long curr = 1, prev = 0, sum = 0;

  while (curr < FOUR_MILLION) {
    long long tmp = curr;
    curr += prev;
    prev = tmp;

    // calculate sum
    if (curr % 2 == 0) sum += curr;
  }

  return sum;
}


// Method - 02 (using golden ratio techinque)
// time complexity -> O(N), space complexity -> O(1)
// even though the complexity is same, the no of iteration is reduced to 1/3 times
// as we hop to even numbers after even numbers without generation of fibonacci sequence
double golden_ratio_technique() {
  const double PHI = 1.6180339887;

  // to get the next even number, mul this const with curr even number in series
  const double third_no = PHI * PHI * PHI;

  double digit = 2, sum = 2;

  while ((digit * third_no) < FOUR_MILLION) {
    digit = round(digit * third_no);
    sum += digit;
  }

  return sum;
}



/* ALL STARTS HERE */
int main() {
  printf("BruteForce: Sum of even-values terms: %lld \n", brute_force());
  printf("GoldenRatio: Sum of even-values terms: %lf \n", golden_ratio_technique());

  return 0;
}