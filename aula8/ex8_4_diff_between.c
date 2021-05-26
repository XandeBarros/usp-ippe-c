#include <stdio.h>

int main() {
  int arnumbers[10], aux = 0, diff, j;

  for(int i = 0; i < 10; i++) {
    scanf("%d", &arnumbers[i]);
  }

  for(int i = 0; i < 9; i++) {
    j = i + 1;

    diff = arnumbers[j] - arnumbers[i];

    if(diff > aux) {
      aux = diff;
    }
  }
  
  printf("%d ", aux);
}
