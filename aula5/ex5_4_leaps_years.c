#include <stdio.h>

int main() {
  int yearmin, yearmax, valid4, valid100, valid400; 

  printf("Qual ano inicial do período que você quer verificar? ");
  scanf("%d", &yearmin); 
  printf("Qual ano final do período que você quer verificar? ");
  scanf("%d", &yearmax); 

  valid4 = !((yearmin % 4) == 0);
  valid100 = !((yearmin % 100) == 0);
  valid400 = !((yearmin % 400) == 0);

  while((valid400) || (valid4 && !valid100)) {
    valid4 = ((yearmin % 4) == 0);
    valid100 = ((yearmin % 100) == 0);
    yearmin++; 
  }

  while (yearmax >= yearmin) {
    printf("%d\n", yearmin);
    yearmin += 4;
  }
}
