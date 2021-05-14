#include <stdio.h>

int main() {
  int number, bool;

  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    bool = ((number % i) == 0);
    if(bool) {
      printf(" %d", i);
    }
  }
}
