#include <stdio.h>

int breakNumber(float number, int *intPart, float *floatPart) {
  *intPart = number / 1;
  
  *floatPart = number - *intPart;
}

int main() {
  float number, fPart;

  int iPart;

  scanf("%f", &number);

  breakNumber(number, &iPart, &fPart);

  printf("%d %f", iPart, fPart);
}