#include <stdio.h>
#include <math.h>

int main()
{
  int horas, minutos;
  float angulo;

  scanf("%d", &horas);
  scanf("%d", &minutos);

  angulo = 360 - fabs((11 * minutos - 60 * horas) / 2.0);

  printf("%f", angulo);
}