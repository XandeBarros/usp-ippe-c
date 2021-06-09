#include <stdio.h>

int rectBase(int base) {
  printf("+");

  for(int i = 1; i <= (base - 2); i++) {
    printf("-");
  }

  printf("+");
}

int rectHeigth(int base, int heigth) {
  printf("\n");
  for(int i = 1; i <= (heigth - 2); i++) {
    printf("| ");
    for (int j = 1; j < (base - 2); j++) {
      printf(" ");
    }
    printf("| \n");
  }
}

int main() {
  int base, heigth;

  scanf("%d %d", &base, &heigth);

  rectBase(base);
  rectHeigth(base, heigth);
  rectBase(base);
}
