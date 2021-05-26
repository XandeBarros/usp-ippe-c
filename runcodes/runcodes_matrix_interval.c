#include <stdio.h>

int main() {
  int matrix[5][5], minvalue, maxvalue, aux = 0;

  for(int row = 0; row < 5; row++) {
    for(int col = 0; col < 5; col++) {
      scanf("%d", &matrix[row][col]);
    }
  }

  scanf("%d %d", &minvalue, &maxvalue);

  for(int row = 0; row < 5; row++) {
    for(int col = 0; col < 5; col++) {
      if((matrix[row][col] <= maxvalue) && (matrix[row][col] >= minvalue)) {
        aux++;
      }
    }
  }

  printf("%d", aux);
}
