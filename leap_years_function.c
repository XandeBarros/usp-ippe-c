#include <stdio.h>

int valida(int year) {
  int valid4, valid100, valid400;

  valid4 = ((year % 4) == 0);
  valid100 = ((year % 100) == 0);
  valid400 = ((year % 400) == 0);

  return ((valid400) || (valid4 && !valid100));
}

int main() {
  int yearmin, yearmax; 

  scanf("%d %d", &yearmin, &yearmax);

  while(!valida(yearmin)) {
    ++yearmin;
  }

  while (yearmax > yearmin) {
    if(valida(yearmin)) {
      printf(" %d", yearmin);
    }

    yearmin += 4;
  } 
}
