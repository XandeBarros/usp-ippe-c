#include <stdio.h>
#include <stdlib.h>

struct Filme { 
  char nome[20]; 
  int avaliacao; 
  int ano; 
};

int main() {
  FILE *arq;

  struct Filme filme[5];

  arq = fopen("filmes.dat", "rb+");
  if(arq==NULL) {
    exit(0);
  }

  fread(filme, sizeof(struct Filme), 5, arq);

  for(int i = 0; i < 5; i++) {
    if(filme[i].ano >= 2000 && filme[i].avaliacao > 5) printf("%s\n", filme[i].nome);
  }

  fclose(arq);
}
