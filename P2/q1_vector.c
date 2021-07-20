#include <stdio.h>
#include <stdlib.h>

int * createPrintVector(int *n) {
  int *vector, aux;

  vector = (int *)calloc(10, sizeof(int));

  scanf("%d", &aux);

  for(int i = 0; i < aux; i++) {
    scanf("%d", &vector[i]);
  }

  *n = aux;  

  return vector;
}

int main() {
  int n;

  int * vector = createPrintVector(&n); 

  for(int i = 0; i < n; i++) {
    printf("%d ", vector[i]);
  }

  free(vector);
}
