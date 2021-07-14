#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudantes {
  char nome[200];
  float nota1;
  float nota2;
  float notaFinal;
};

void writeFile(struct Estudantes estudantes[]) {
  FILE *arq;

  arq = fopen("ex3Alunos.txt", "w+");
  if(arq==NULL) {
    exit(0);
  }

  for(int i = 0; i < 10; i++) {
    __fpurge(stdin);
    printf("Nome: ");
    scanf("%[^\n]", estudantes[i].nome);
    fprintf(arq, "%s\n", estudantes[i].nome);

    printf("Nota P1: ");
    scanf("%f", &estudantes[i].nota1);

    fprintf(arq, "%f\n", estudantes[i].nota1);

    printf("Nota P2: ");
    scanf("%f", &estudantes[i].nota2);
    fprintf(arq, "%f\n", estudantes[i].nota2);

    estudantes[i].notaFinal = (estudantes[i].nota1 + estudantes[i].nota2) / (float)2; 
    fprintf(arq, "%f\n", estudantes[i].notaFinal);
  }

  fclose(arq);
}

int main() {
  struct Estudantes estudantes[10];

  writeFile(estudantes);
}