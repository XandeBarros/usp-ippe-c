#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * readFile() {
  FILE *arq;
  char *frase;
  frase = (char *)calloc(200, sizeof(char));

  arq = fopen("ex2File.txt", "r+");

  if(arq==NULL) {
    exit(0);
  }

  fscanf(arq, "%[^\n]", frase);
  fclose(arq);
  
  return frase;
}

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

void main() {
  char *string, palavra[200];

  string = (char *)calloc(200, sizeof(char)); 

  string = readFile();

  __fpurge(stdin);
  scanf("%[^\n]", palavra);

  int result = searchString(string, palavra);

  printf("%d ", result);
}