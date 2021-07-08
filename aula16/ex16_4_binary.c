#include <stdio.h>
#include <stdlib.h>

void main() {
  FILE *arq;
  int vetA[5] = {0, 1, 2, 3, 4}, vetB[5];

  arq = fopen("ex4File.txt", "wb+");

  if(arq == NULL) {
    exit(0);
  }

  fwrite(vetA, sizeof(int), 5, arq);

  fseek(arq, 0, SEEK_SET);

  fread(vetB, sizeof(int), 5, arq);

  for(int i = 0; i < 5; i++) {
    printf("%d ", vetB[i]);
  }

  fclose(arq);
}