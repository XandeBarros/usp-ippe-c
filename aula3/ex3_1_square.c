#include <stdio.h>

int main() {
  double square_side, square_surf, square_peri;
  printf("Digite o lado do quadrado: ");
  scanf("%lf", &square_side);

  square_surf = square_side * square_side;
  square_peri = 4*square_side;

  printf("O perímetro do quadrado de lado %.2f é de %.2f e sua área é de %.2f\n", square_side, square_peri, square_surf);
}