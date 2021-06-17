#include <stdio.h>

void changeValue(int *A,int *B) {
  int aux;
  aux = *A;
  *A = *B;
  *B = aux;
}

int main() {
  int A, B;

  scanf("%d %d", &A, &B);

  changeValue(&A, &B);

  printf("%d %d", A, B);
}