#include <stdio.h>
#include <stdlib.h>

int searchString(char str1[], char str2[])
{
  int vezes = 0;
  for (int i = 0; str1[i] != '\0'; i++)
  {
    int j;
    for (j = 0; str2[j] != '\0' && str2[j] == str1[i + j]; j++)
      ;
    if (str2[j] == '\0')
      vezes++;
  }
  return vezes;
}

int main()
{
  char stringS[51], palavraA[10], palavraB[10];
  int vezesA = 0, vezesB = 0;

  fgets(stringS, 51, stdin);
  scanf("%s", palavraA);
  fflush(stdin);
  scanf("%s", palavraB);
  fflush(stdin);

  vezesA = searchString(stringS, palavraA);
  vezesB = searchString(stringS, palavraB);

  printf("%d %d", vezesA, vezesB);
}
