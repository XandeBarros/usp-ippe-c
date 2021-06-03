#include <stdio.h>
#include <math.h>

int distpoints(int pta, int ptb) {
  return sqrt(pow(pta, 2) + pow(ptb, 2));
}

int main() {
  int pta, ptb;

  scanf("%d %d", &pta, &ptb);

  printf("%d", distpoints(pta, ptb));
}
