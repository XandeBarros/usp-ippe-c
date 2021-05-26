#include <stdio.h>

int main() {
  int arA[5], arB[5], arS[5],  aux;

  for(int i = 0; i < 5; i++) {
    scanf("%d", &arA[i]);
  }

  for(int i = 0; i < 5; i++) {
    scanf("%d", &arB[i]);
  }

  for(int i = 0; i < 5; i++) {
    arS[i] = arA[i] + arB[i];
  }

   for(int i = 0; i < 5; i++) {
    printf("%d ", arS[i]);
  }
}
