#include <stdio.h>

void main() {
  float sum, numerator, denominator;
  
  sum = 0;

  for(int i = 1; i <= 50; i++) {
    numerator = 2 * i - 1;
    denominator = i;

    sum += (numerator / denominator);
  }

  printf("%f\n", sum);
}