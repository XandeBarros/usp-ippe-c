#include <stdio.h>
#include <stdlib.h>

int main() {
  float *grades, aux = 0.0, result;
  int n;

  scanf("%d", &n);

  grades = (float *)calloc(n, sizeof(float));

  for(int i = 0; i < n; i++) {
    scanf("%f", &grades[i]);
  }

  for(int i = 0; i < n; i++) {
    aux += grades[i];
  }

  result = aux / n;

  printf("%f", result);

  free(grades);
  exit(1);
}