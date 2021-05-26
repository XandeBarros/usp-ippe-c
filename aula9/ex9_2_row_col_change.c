#include <stdio.h>

int main() {
  int matrix[5][5], thirdrow[5], thirdcol[5];

  for(int row = 0; row < 5; row++) {
    for(int col = 0; col < 5; col++) {
      scanf("%d", &matrix[row][col]);
    }
  }

  printf("\n");

  for(int row = 0; row < 5; row++) {
    for(int col = 0; col < 5; col++) {
      printf("%d ", matrix[row][col]);
    }
    printf("\n");
  }

  printf("\n");

  for(int i = 0; i < 5; i++) {
    thirdrow[i] = matrix[2][i];
    thirdcol[i] = matrix[i][2];
  }

  for(int i = 0; i < 5; i++) {
    matrix[2][i] = thirdcol[i];
    matrix[i][2] = thirdrow[i];
  }

  printf("\n");

  for(int row = 0; row < 5; row++) {
    for(int col = 0; col < 5; col++) {
      printf("%d ", matrix[row][col]);
    }
    
    printf("\n");
  }
}
