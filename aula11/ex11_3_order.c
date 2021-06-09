#include <stdio.h>

int main() {
  int vector[10], aux;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &vector[i]);
  }
  

  for(int i = 0; i < 10; i++) {
    for(int j = i + 1; j< 10; j++) {
      if(vector[j] < vector[i]) {
        aux = vector[i];
        vector[i] = vector[j];
        vector[j] = aux;
      }
    }
  }

  for(int i = 0; i < 10; ++i) printf("%d ", vector[i]);  
}