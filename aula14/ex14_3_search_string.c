#include <stdio.h>
#include <stdlib.h>

int searchString(char str1[], char str2[]) {
  int j = 0, aux = 0, saux = 0, taux;

  for(int i = 0; str2[i] != '\0'; i++) {
    aux++;
  }
  
  for(int i = 0; str1[i] != '\0'; i++) {
    taux = i;
    if(str1[i] == str2[j]) { 
      for(j = 0; str2[j] != '\0'; j++) {
        if((str1[i] == str2[j]) /* && (str1[i+1] == ' ') */ ){
          i++;
          saux++;

          if((saux == aux && (str1[i] == ' ' || str1[i] == '\0'))) {
            return 1;
          }
        }
      }
      saux = 0;
    }
    i = taux;
  } 

  return 0;
}

int main() {
  char str1[200], str2[200];
  
  scanf("%[^\n]", str1);

  __fpurge(stdin);
  
  scanf("%[^\n]", str2);

  int result = searchString(str1, str2);

  printf("%d", result);
}