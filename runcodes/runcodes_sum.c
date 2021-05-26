#include <stdio.h>

int main() {
  int x, y, sum;

  scanf("%d %d", &x, &y);
  
  if(y > x) {
    sum = y;

    while(y > x) {
      sum += x;
      ++x;
    }
    printf("%d", sum);
  }
}