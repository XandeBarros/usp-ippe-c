#include <stdio.h>

int main() {
  int v[10], *maior, *menor;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }

  maior = &v[0];
  menor = &v[0];

  for(int i = 0; i < 10; i++) {
    if(v[i] > *maior) {
      maior = &v[i];
    }

    if(v[i] < *menor) {
      menor = &v[i];
    }
  }

  printf("%d %d", *maior, *menor);
}
