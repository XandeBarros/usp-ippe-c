#include <stdio.h>

int surface(int *base, int *height) {
  return (*base * *height ) / 2;
}

int main() {
  int base, height, result;

  scanf("%d %d", &base, &height);

  printf("%d", surface(&base, &height));
}
