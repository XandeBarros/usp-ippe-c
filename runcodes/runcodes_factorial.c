#include <stdio.h>

int main(){
  int number, aux;

  scanf("%d", &number);

  aux = number;

  for(int i = --number; i > 0; --i) {
    aux = aux * i;
  }

  printf("%d", aux);
}
