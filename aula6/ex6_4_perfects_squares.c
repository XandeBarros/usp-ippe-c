#include <stdio.h>

void main() {
  int number, i, perfectsquare;
 
  for(number = 1; number <= 5000; number++) {
    for(i = 1; i <= number; i++) {
      if((number == i * i)) {
        printf("%d\n", number);
      }
    }
  }
}