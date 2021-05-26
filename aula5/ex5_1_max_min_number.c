// This code will show the maximun and the minimun number until the user send a negative number
#include <stdio.h>

void main()
{
  float minor, major;
  float number;
  printf ("Digite a primeira nota: ");
  scanf ("%f", &number);

  major = number;
  minor = number;

  while (number > 0) {
    if (!(number > minor))
  	{
	    minor = number;
	  }

    if (number > major)
	  {
	    major = number;
  	}

    printf ("Digite outro numero: ");
    scanf("%f", &number);
  }

  printf ("A maior nota foi: %.2f. E a menor nota foi: %.2f.", major, minor);
  printf ("\n");
}
