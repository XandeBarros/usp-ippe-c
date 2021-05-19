#include <stdio.h>

int main(){
  int num, dem, number;
  float pi;

  pi = 4;
  num = 4;
  scanf("%d", &number);

  for(int i = 1; i < number; i++) {
    dem = 2 * i + 1;

    if(!(i % 2 == 0)) {
      pi -= num/(float)dem;
    } else {
      pi += num/(float)dem;
    }
  }

  printf("%f", pi);
}
