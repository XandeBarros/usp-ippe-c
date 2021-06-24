#include <stdio.h>
#include <stdlib.h>

int * createArray(int n) {
  int *v;

  v = (int*)calloc(n, sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  return v;
}

int sumPositive(int v[],int n) {
  int result = 0;

  for(int i = 0; i < n; i++) {
    if(!(v[i] < 0)) {
      result += v[i];
    }
  }

  return result;
}

int main() {
  int n, *v, sum;

  scanf("%d", &n);

  v = createArray(n);

  sum = sumPositive(v, n);

  printf("%d", sum);
  
  free(v);
}
