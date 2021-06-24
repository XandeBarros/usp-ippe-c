#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * removeLetter(char str[], char letter) {
  char *result;

  result = (char *)calloc(200, sizeof(char));

  int j = 0, aux;

  for(int i = 0; str[i] != '\0'; ++i) {
    if(str[i] != letter) {
      result[j] = str[i];
      j++;
    }
  }

  result[j] = '\0';

  return result;
}

int main() {
  char str[200], letter, *newStr;

  newStr = (char *)calloc(200, sizeof(char));

  scanf("%[^\n]s", str);
  scanf(" %c", &letter);

  newStr = removeLetter(str, letter);

  for(int i = 0; i < strlen(newStr); i++) {
    printf("%c", newStr[i]);
  }
}