#include <stdio.h>

int main() {
  int user_number, evaluate_predecessor, evaluate_successor, evaluate;

  printf("Digite um número inteiro: ");
  scanf("%d", &user_number);

  evaluate_successor = (3*user_number) + 1;
  evaluate_predecessor = (2*user_number) - 1;

  evaluate = evaluate_successor + evaluate_predecessor;
  printf("O resulto da expressão usando %d 'soma do sucessor do seu tripo com o antecessor do seu dobro' é de %d\n", user_number, evaluate);
}