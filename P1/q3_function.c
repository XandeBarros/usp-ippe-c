#include <stdio.h>

int bolaCabe(float dia, float h, float l, float p) {
  if(dia <= h && dia <= l && dia <= p) {
    return 1;
  }

  return 0;
}

int main() {
  float altura, largura, prof, diametro;

  scanf("%f", &altura);
  scanf("%f", &largura);
  scanf("%f", &prof);
  scanf("%f", &diametro);

  int resultado = bolaCabe(diametro, altura, largura, prof);

  printf("%d", resultado);
}