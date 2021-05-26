#include <stdio.h>

int main() {
  float approver, average, number, sum;
  int i = 0, 
      j = 0;
  
  scanf ("%f", &number);

  while (number >= 0) {
    if (number >= 5) {
	    ++i;
	  } else {
	    ++j;
  	}

    sum += number;

    scanf("%f", &number);
  } 

  average = (sum / (float)(i + j));
  approver = (i / (float)(i + j)*100);
  
  printf("%d %d %f %f", i, j, average, approver);
}