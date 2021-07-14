#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int *vetor1, int *vetor2, int *vetor_res, int n);

int main() {
  int *vetor1, *vetor2, *vetor_res, n;

  scanf("%d", &n);

  int  v1[n], v2[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &v1[i]);
  }

  for(int i = 0; i < n; i++) {
    scanf("%d", &v2[i]);
  }

  vetor1 = v1;
  vetor2 = v2;
  vetor_res = (int *)calloc(n, sizeof(int));

  soma_vetor(vetor1, vetor2, vetor_res, n);

  for(int i = 0; i < n; i++) {
    printf("%d", vetor_res[i]);
  }
}

void soma_vetor(int *vetor1, int *vetor2, int *vetor_res, int n) {
  for(int i = 0; i < n; i++) {
    vetor_res[i] = vetor1[i] + vetor2[i];
  }
}