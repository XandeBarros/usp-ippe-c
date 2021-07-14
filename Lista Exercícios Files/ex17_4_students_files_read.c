#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudantes {
  char nome[200];
  float nota1;
  float nota2;
  float notaFinal;
};

void readFile(struct Estudantes estudantes[]) {
  FILE *arq;

  arq = fopen("ex3Alunos.txt", "r+");
  if(arq==NULL) {
    exit(0);
  }

  for(int i = 0; i < 10; i++) {
    fscanf(arq, "%[^\n]", estudantes[i].nome);
    printf("Nome: ");
    printf("%s\n", estudantes[i].nome);

    fscanf(arq, "%f", &estudantes[i].nota1);
    printf("Nota P1: ");
    printf("%f\n", estudantes[i].nota1);


    fscanf(arq, "%f", &estudantes[i].nota2);
    printf("Nota P2: ");
    printf("%f\n", estudantes[i].nota2);

    fscanf(arq, "%f\n", &estudantes[i].notaFinal);
    printf("Nota Final: ");
    printf("%f\n", estudantes[i].notaFinal);
  }  
}

int main() {
  struct Estudantes estudantes[10];

  readFile(estudantes);
}
