#include <stdio.h>

int main() {
  int matrix[4][5], vector[5];

  for(int row = 0; row < 4; row++) {
    for(int col = 0; col < 5; col++) {
      scanf("%d", &matrix[row][col]);
    }
  }

  for(int row = 0; row < 4; row++) {
    for(int col = 0; col < 5; col++) {
      vector[col] += matrix[row][col];
    }
  }

  for(int i = 0; i < 5; i++) {
    printf("%d ", vector[i]);
  }
}
