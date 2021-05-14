#include <stdio.h>

int main()
{
  int square_side, square_surf, square_peri;
  scanf("%d", &square_side);

  square_surf = square_side * square_side;
  square_peri = 4 * square_side;

  printf("%d %d", square_surf, square_peri);
}