#include <stdio.h> 

int main() {
  int vector[20], newVector[20];

  for(int i = 0; i < 20; i++) {
    scanf("%d", &vector[i]);
  }

  for(int i = 0; i < 20; i++) {
    int bool = 0;

    for(int j = 0; j < 20; j++) {
      if(i != j) {
        if(vector[i] == vector[j]) {
          bool++;
        }
      }
    }

    if(bool == 0) {
      newVector[i] = vector[i];
      printf("%d ", newVector[i]);
    }
  }
}
