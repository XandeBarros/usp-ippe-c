#include <stdio.h>
#include <stdlib.h>

void writeFile(char frase[]) {
  FILE *arq;
  arq = fopen("ex3File.txt", "w+");

  if(arq==NULL) {
    exit(0);
  }

  fprintf(arq, "%s\n", frase);

  fclose(arq);
}

char * readFile() {
  FILE *arq;
  char *frase;
  frase = (char *)calloc(200, sizeof(char));

  arq = fopen("ex3FileBase.txt", "r+");

  if(arq==NULL) {
    exit(0);
  }

  fscanf(arq, "%[^\n]", frase);
  fclose(arq);

  return frase;
}

void main() {
  char *frase;
  frase = (char *)calloc(200, sizeof(char));

  frase = readFile();  

  writeFile(frase);
}