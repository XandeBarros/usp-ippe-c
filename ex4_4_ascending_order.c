#include <stdio.h>

int main() {
  int n, i, j;
  printf("Digite a quantidade de números a serem postos em ordem: ");
  scanf("%d", &n);
  
  float number[n], aux;
  
  printf("Digite os números: ");
  for(i = 0; i < n; ++i)
    scanf("%f", &number[i]);
  for(i = 0; i < n; ++i) {
    for(j = i + 1; j < n; ++j) {
      if(number[i] > number[j]) {
        aux = number[i];
        number[i] = number[j];
        number[j] = aux;
      }
    }
  }
  printf("Os números em ordem crescente são: \n");
  for(i = 0; i < n; ++i) printf("%.2f\n", number[i]);  
}