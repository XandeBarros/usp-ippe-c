#include <stdio.h>

int countEven(int v[]) {
  int aux = 0;

  for(int i = 0; i < 20; i++) {
    if(v[i] % 2) {
      aux++;
    }
  }

  return aux;
}

void vectorChanges(int v[], int *evens, int *odds, int evenVector[], int oddVector[]) {
  *evens = countEven(v); 
  *odds = 20 - *evens;

  int j = 0, k = 0;

  for(int i = 0; i < 20; i++) {
    if(v[i] % 2) {
      evenVector[j] = v[i];
      j++;
    } else {
      oddVector[k] = v[i];
      k++;
    }
  }
}

int main() {
  int vector[20], evens, odds, evenVector[countEven(vector)], oddVector[20 - countEven(vector)];

  for(int i = 0; i < 20; i++) {
    scanf("%d", &vector[i]);
  }

  vectorChanges(vector, &evens, &odds, evenVector, oddVector);

  printf("%d %d", evens, odds);

  for(int i = 0; i < evens; i++) {
    printf("%d ", evenVector[i]);
  }

  for(int i = 0; i < odds; i++) {
    printf("%d ", oddVector[i]);
  }
}
