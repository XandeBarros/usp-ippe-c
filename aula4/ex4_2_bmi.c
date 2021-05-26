#include <stdio.h>

int main() {
  float height, mass, bmi;
  printf("Digite sua altura (em metros): ");
  scanf("%f", &height);
  printf("Digite sua massa: ");
  scanf("%f", &mass);

  bmi = mass / (height * height);

  if (bmi >= 40) printf("Obesidade Grau III\n");
  else if (bmi < 40 && bmi >= 35) printf("Obesidade Grau II\n");
  else if (bmi < 35 && bmi >= 30) printf("Obesidade Grau I\n");
  else if (bmi < 30 && bmi >= 25) printf("Peso em excesso\n");
  else if (bmi < 25 && bmi >= 18.5) printf("Saudável\n");
  else printf("Abaixo do Peso\n");
}