#include <stdio.h>

int main() {
  double p1_grade, p2_grade, p3_grade;
  float t1_grade, t2_grade, average_p, average_t, average_final;

  printf("Digite a nota da sua p1, p2 e p3 (respectivamente): ");
  scanf("%lf %lf %lf", &p1_grade, &p2_grade, &p3_grade);
  printf("Digite a nota do seu Trab 1 e Trab 2 (respectivamente): ");
  scanf("%f %f", &t1_grade, &t2_grade);

  average_p = (2*p1_grade + 3*p2_grade + 3*p3_grade)/8;
  average_t = (t1_grade + t2_grade)/2;
  average_final = (7*average_p + 3*average_t)/10;

  printf("A sua média de provas é: %.2f. A sua média de trabalhos é: %.2f. A sua média final é: %.2f.\n", average_p, average_t, average_final);
}