#include <stdio.h>
 
int main() {
  int year, valid4, valid100;
  printf("Qual ano você quer verificar? ");
  scanf("%d", &year); //2000, 2001, 2004

  //resto da divisão inteira: 2004 /(%) 4 => 0 == 0 true
  valid4 = ((year % 4) == 0); // true
  //resto da divisão inteira: 2004 /(%) 100 => 4 == 0 false
  valid100 = ((year % 100) == 0); // true

  //                     true                 if(true) {condição} else (false) {essaoutracondição}
  //          false                     true  
  //    true       false        true       true
  if ((valid4 && valid100) || (valid4 && !valid100)) {
    printf("Ano Bissexto!\n"); // 2000, 2004 Tabela Verdade (e) e a do (ou)
  }
  else printf("Ano não bissexto!\n"); // 2001
}

// Tabela Verdade E (&&)
/*
true E true = true
true E false = false
false E true = false
false E false = false
*/

// Tabela Verdade OU (||)
/*
true OU true = true
true OU false = true
false OU true = true
false OU false = false
*/