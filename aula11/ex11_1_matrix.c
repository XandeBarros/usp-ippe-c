#include <stdio.h>


int main() {
  int number;

  scanf("%d", &number);

  int matrix[number][number];

  for(int row = 1; row <= number; row++) {
    for(int col = 1; col <= number; col++) {
      matrix[row][col] = row * col;
    }
  }

  for(int row = 1; row <= number; row++) {
    for(int col = 1; col <= number; col++) {
      printf("%d ", matrix[row][col]);
    }

    printf("\n");
  }
}