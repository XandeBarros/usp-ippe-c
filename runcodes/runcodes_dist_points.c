#include <stdio.h>
#include <math.h>

float distpoints(float pta, float ptb) {
  return sqrt(pow(pta, 2) + pow(ptb, 2));
}

int main() {
  float xpta, xptb, ypta, yptb;

  scanf("%f %f %f %f", &xpta, &ypta, &xptb, &yptb);

  printf("%f", distpoints(xpta-xptb, ypta-yptb));
}
