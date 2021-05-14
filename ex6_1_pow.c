#include <stdio.h>

void main() {
  int number, exponent, result, aux;

  printf("Digite a base: ");
  scanf("%d", &number);

  printf("Digite o expoente: ");
  scanf("%d", &exponent);
  
  aux = number;

  for(int i = 0; i < exponent - 1; ++i) {
    number*=aux;
  }

  printf("%d\n", number);
}