#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudantes {
  char nome[200];
  int nUsp;
  float notaFinal;
};

int separaAlunos(struct Estudantes estudantes[], struct Estudantes aprovados[], struct Estudantes reprovados[]);

int main() {
  struct Estudantes estudantes[10], *aprovados, *reprovados;

  aprovados = (struct Estudantes*)calloc(10, sizeof(struct Estudantes));
  reprovados = (struct Estudantes*)calloc(10, sizeof(struct Estudantes));

  for(int i = 0; i < 10; i++) {
    __fpurge(stdin);
    printf("Nome: ");
    scanf("%[^\n]", estudantes[i].nome);

    printf("nUsp: ");
    scanf("%d", &estudantes[i].nUsp);

    printf("Nota Final: ");
    scanf("%f", &estudantes[i].notaFinal);
  }
  
  int alunosAprovados = separaAlunos(estudantes, aprovados, reprovados);

  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Aprovados #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
  for(int i = 0; i < alunosAprovados; i++) {
    printf("Nome: %s\n", aprovados[i].nome);
    printf("nUsp: %d\n", aprovados[i].nUsp);
    printf("Nota Final: %.2f\n", aprovados[i].notaFinal);
  }

  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Reprovados #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
  for(int i = 0; i < 10 - alunosAprovados; i++) {
    printf("Nome: %s\n", reprovados[i].nome);
    printf("nUsp: %d\n", reprovados[i].nUsp);
    printf("Nota Final: %.2f\n", reprovados[i].notaFinal);
  }

  free(aprovados);
  free(reprovados);
}

int separaAlunos(struct Estudantes estudantes[], struct Estudantes aprovados[], struct Estudantes reprovados[]) {
  int j = 0, k = 0;
  for(int i = 0; i < 10; i++) {
    if(estudantes[i].notaFinal >= 5.00) {
      strcpy(aprovados[j].nome, estudantes[i].nome);
      aprovados[j].nUsp = estudantes[i].nUsp;
      aprovados[j].notaFinal = estudantes[i].notaFinal;
      j++;
    } else {
      strcpy(reprovados[k].nome, estudantes[i].nome);
      reprovados[k].nUsp = estudantes[i].nUsp;
      reprovados[k].notaFinal = estudantes[i].notaFinal;
      k++;
    }
  }

  return j;
}