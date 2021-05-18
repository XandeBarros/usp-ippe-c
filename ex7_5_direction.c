#include <stdio.h>

int main(){
  int number, gamb;

  scanf("%d", &number);

  gamb = number + 2;
  
  for(int i = 1; i <= gamb; i++) {
    int aux = 0;

    while (!(aux == i)) {
      printf("* ");
      ++aux;
    }

    printf("\n");
    if (i >= number) break;
  }

  for(int i = 1; i <= gamb; i++) {
    int aux = number;

    while (!(aux == i)) {
      printf("* ");
      --aux;
    }

    printf("\n");
    if (i >= number - 1) break;
  }
}
