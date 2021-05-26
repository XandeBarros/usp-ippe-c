#include <stdio.h>

int main() {
  int number, firstaux, previous, secondaux;

  scanf("%d", &number);

  firstaux = 1;
  previous = 0;

  printf("%d ", previous);

  while (firstaux <= number) {
    printf("%d ", firstaux);
    secondaux = firstaux;
    firstaux = firstaux + previous;
    previous = secondaux;
  }

  printf("%d", firstaux);
}
