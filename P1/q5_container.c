#include <stdio.h>

int main() {
  float x, y, z, a, b, c;
  int maxLargura, maxComprimento, maxAltura, resultado;

  scanf("%f %f %f %f %f %f", &x, &y, &z, &a, &b, &c);

  maxLargura = x / a;
  maxComprimento = y / b;
  maxAltura = z / c;
  resultado = maxAltura * maxLargura * maxComprimento;

  printf("%d", resultado);
}