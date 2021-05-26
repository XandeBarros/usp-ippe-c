#include <stdio.h>

int main() {
  int arnumbers[10], aux;

  for(int i = 0; i < 10; i++) {
    scanf("%d", &arnumbers[i]);
  }

  for(int i = 0; i < 10; i++) {
    for(int j = i + 1; j < 10; j++) {
      aux = arnumbers[i];
      arnumbers[i] = arnumbers[j];
      arnumbers[j] = aux;
    }
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ", arnumbers[i]);
  }
}
