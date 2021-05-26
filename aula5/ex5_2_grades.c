#include <stdio.h>

int main() {
  float aprovado;
  int number, average;
  int i = 0, 
      j = 0,
      sum = 0;
  
  printf ("Digite a primeira nota: ");
  scanf ("%d", &number);

  while (number >= 0) {
    if (number >= 5) {
	    ++i;
	  } else {
	    ++j;
  	}

    sum += number;

    printf("Digite outro numero: ");
    scanf("%d", &number);
  } 

  average = (sum / (i + j));
  printf("A média geral das notas é: %d", average);
  printf("\n");
  aprovado = (i / (float)(i + j))*100;
  float reprovado = 100 - aprovado;
  printf("A porcentagem de alunos aprovados foi: %.2f. A porcentagem de reprovados foi: %.2f", aprovado, reprovado);
  printf("\n");
}