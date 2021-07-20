#include <stdio.h>
#include <stdlib.h>

struct Filme { 
  char nome[20]; 
  int avaliacao; 
  int ano; 
};

void preencheFilmes(struct Filme filme[]);

int main() {
  struct Filme filme[5];

  preencheFilmes(filme);

  for (int i = 0; i < 5; i++) {
    printf("%s\n", filme[i].nome);
    printf("%d\n", filme[i].avaliacao);
    printf("%d\n", filme[i].ano);
  }
}

void preencheFilmes(struct Filme filme[]) {
  for(int i = 0; i < 5; i++) {
    scanf("%s", filme[i].nome);
    fflush(stdin);
    scanf("%d", &filme[i].avaliacao);
    scanf("%d", &filme[i].ano);
  }
}
