#include <stdio.h>
#include <stdlib.h>

void writeFile() {
  FILE *arq;
  char frase[200];
  arq = fopen("ex1File.txt", "w+");

  if(arq==NULL) {
    exit(0);
  }

  scanf("%[^\n]", frase);
  fprintf(arq, "%s\n", frase);

  fclose(arq);
}

void readFile() {
  FILE *arq;
  char frase[200];
  arq = fopen("ex1File.txt", "r+");

  if(arq==NULL) {
    exit(0);
  }

  fscanf(arq, "%[^\n]", frase);
  printf("%s", frase);

  fclose(arq);
}

void main() {
  writeFile();
  readFile();  
}