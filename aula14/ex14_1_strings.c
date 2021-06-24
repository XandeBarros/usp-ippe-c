#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
  int result = 0;

  for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] == ' ' && str[i+1] != ' ') {
      result++;
    }
  }

  return result;
}

int main() {
  char str[200];
  int aux;

  printf("Enter the string:\n");
  scanf("%[^\n]s", str);

  aux = countWords(str) + 1;

  printf("%d", aux);
}