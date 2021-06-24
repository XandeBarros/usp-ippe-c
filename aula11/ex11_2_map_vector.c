#include <stdio.h> 

int newVectorLength(int vector[]) {
  int vectorLength = 0;

  for(int i = 0; i < 20; i++) {
    int bool = 0;

    for(int j = 0; j < 20; j++) {
      if(i != j) {
        if(vector[i] == vector[j]) {
          bool++;
        }
      }
    }

    if(!bool) {
      vectorLength++;
    }
  }

  return vectorLength;
}

int newVectorValues(int vector[], int newVector[]) {
  int bool = 0;
  
  for(int i = 0; i < 20; i++) {

    for(int j = 0; j < 20; j++) {
      if(i != j) {
        if(vector[i] == vector[j]) {
          newVector[bool] = vector[i];
          bool++;
        }
      }
    }
  }
}

int main() {
  int vector[20], newVector[newVectorLength(vector)];

  for(int i = 0; i < 20; i++) {
    scanf("%d", &vector[i]);
  }

  printf("%d", newVectorLength(vector));

  for(int i = 0; i < newVectorLength(vector); i++) {
    printf("%d ", newVector[i]);
  }
}
