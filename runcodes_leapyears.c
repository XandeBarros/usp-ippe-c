#include <stdio.h>

int main() {
  int yearmin, yearmax, valid4, valid100, valid400; 

  scanf("%d %d", &yearmin, &yearmax);

  valid4 = !((yearmin % 4) == 0);
  valid100 = !((yearmin % 100) == 0);
  valid400 = !((yearmin % 400) == 0);

  while((valid400) || (valid4 && !valid100)) {
    ++yearmin; 
    valid4 = !((yearmin % 4) == 0);
    valid100 = !((yearmin % 100) == 0);
    valid400 = !((yearmin % 400) == 0);
  }

  while (yearmax >= yearmin) {
    valid4 = ((yearmin % 4) == 0);
    valid100 = ((yearmin % 100) == 0);
    valid400 = ((yearmin % 400) == 0);

    if((valid400) || ((valid4) && !(valid100))) {
      printf(" %d", yearmin);
    }

    yearmin += 4;
  } 
}
