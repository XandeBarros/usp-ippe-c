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

  arq = fopen("ex5File.txt", "rb+");

  fread(carro, sizeof(struct Carros), 5, arq);

  for(int i = 0; i < 5; i++) {
    if(carro[i].preco > 20000.0) {
      printf("Modelo: %s\n", carro[i].modelo);
      printf("Cor: %s\n", carro[i].cor);
      printf("Preço: %.2f\n", carro[i].preco);
    }
  }

  fclose(arq);
}