#include <stdio.h>
#include <stdlib.h>

int randomNumber() {
  int num = rand() % 99;
  return num;
}

int main() {
  int num, matrix[5][5];

  srand((unsigned int)time(NULL));

  int vector[25], newVector[25];

  for(int i = 0; i < 25; i++) {
    vector[i] = randomNumber();
  }

  for(int i = 0; i < 25; i++) {
    int bool = 0;

    for(int j = 0; j < 25; j++) {
      if(i != j) {
        if(vector[i] == vector[j]) {
          bool++;
        }
      }
    }
    
    if(bool != 0) {
      vector[i] = randomNumber();
      newVector[i] = vector[i];
    } else {
      newVector[i] = vector[i];
    }
  }

  
  for(int i = 0; i < 5; i++) {
    for(int j = 5*i; j < (5*i)+5; j++) {
      printf("%d ", newVector[j]);
    }
    printf("\n");
  }
}
