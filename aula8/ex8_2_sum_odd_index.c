#include <stdio.h>

int main() {
  int arnumbers[10], aux=0;

  for(int i = 0; i < 10; i++) {
    scanf("%d", &arnumbers[i]);
  }

  for(int i = 0; i < 10; i++) {
    if(!(i % 2 == 0)) {
      aux += arnumbers[i];
    }
  }

  printf("%d ", aux);
}

