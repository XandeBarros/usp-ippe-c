#include <stdio.h>

int main() {
  int vetor[10], a, b;

  for(int i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  scanf("%d %d", &a, &b);

  for(int i = 0; i < 10; i++) {
    if(vetor[i] == a) {
      vetor[i] = b;
    }
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }
}