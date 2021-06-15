// Assumindo que os pedágios de uma estrada são igualmente espaçados e tem o mesmo valor,
// e que o começo da estrada não possui um pedágio, crie um programa que calcula o custo de 
// uma viagem (pedágio + combustível) a partir das seguintes informações que devem ser lidas do usuário:

// (1) o comprimento da estrada em km, (2) o custo do combustível por km percorrido, 
// (3) a distância entre pedágios e (4) o valor de cada pedágio

// Os valores são decimais e devem ser lidos na ordem apresentada acima.

#include <stdio.h>

int main() {
  int pedagios;
  float comprimento, custocombustivel, distpedagio, custopedagio, totalcombustivel, totalpedagios, totalviagem=0.0;

  scanf("%f", &comprimento);
  scanf("%f", &custocombustivel);
  scanf("%f", &distpedagio);
  scanf("%f", &custopedagio);

  pedagios = comprimento / distpedagio;
  totalcombustivel = custocombustivel * comprimento;
  totalpedagios = custopedagio * pedagios;

  totalviagem = totalpedagios + totalcombustivel;
  printf("%f", totalviagem);
}