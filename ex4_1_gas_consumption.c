#include <stdio.h>

int main() 
{
  float kilometers, liters, consumption;
  printf("Digite a quantidade de quilometros rodados: ");
  scanf("%f", &kilometers);
  printf("Digite a quantidade de litros usados: ");
  scanf("%f", &liters);

  consumption = kilometers / liters;

  if(consumption > 12) printf("Super econômico!\n");
  else if (consumption <= 12 && consumption >= 8) printf("Econômico!\n");
  else printf("Venda o carro!\n");
}