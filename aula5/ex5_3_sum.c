#include <stdio.h>

void main() {
  int x, y, sum;

  printf("Digite o primeiro número: ");
  scanf("%d", &x);

  printf("Digite o segundo número: (maior que o primeiro) ");
  scanf("%d", &y);
  
  if(y > x) {
    sum = y;

    while(y > x) {
      sum += x;
      ++x;
    }
    printf("A soma de %d a %d é: %d\n", x, y, sum);

    // sum = (y - x + 1)*((x + y) / 2);
    // printf("A soma de %d a %d é: %d\n", x, y, sum);
  } else {
    printf("Note que o segundo número deve ser maior que o primeiro!\n");
  }
}
