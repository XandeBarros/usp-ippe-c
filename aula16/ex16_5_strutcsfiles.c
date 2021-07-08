#include <stdio.h>
#include <stdlib.h>

struct Carros {
  char modelo[100];
  char cor[50];
  float preco;
};

void main() {
  FILE *arq;
  struct Carros carro[5];

  arq = fopen("ex5File.txt", "wb+");

  for(int i = 0; i < 5; i++) {
    __fpurge(stdin);
    printf("Modelo: ");
    scanf("%[^\n]", carro[i].modelo);

    __fpurge(stdin);
    printf("Cor: ");
    scanf("%[^\n]", carro[i].cor);

    printf("Preço: ");
    scanf("%f", &carro[i].preco);
  }

  fwrite(carro, sizeof(struct Carros), 5, arq);
  fclose(arq);
}