#include <stdio.h>

void main() {
  int number, bool;

  printf("Digite o número: ");
  scanf("%d", &number);

  for(int i = number; i > 0; i--) {
    bool = ((number % i) == 0);
    if(bool) {
      printf("%d\n", i);
    }
  }
}
