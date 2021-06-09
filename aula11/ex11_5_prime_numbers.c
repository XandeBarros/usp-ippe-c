#include <stdio.h>

int prime(int number) {
  for(int i = 2; i <= number; i++) {
    int bool = 0;

    for(int j = 2; j <= i; j++) {
      if(i % j == 0) {
        bool++;
      }
    }

    if(bool == 1) {
      printf("%d ", i);
    }
  }
}

int main() {
  int number;

  scanf("%d", &number);

  prime(number);
}