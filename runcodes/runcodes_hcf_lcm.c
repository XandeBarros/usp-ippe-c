#include <stdio.h>

int lcm(int numbers[3]);

int hcf(int numbers[3]);

int main() {
  int numbers[3];

  for(int i = 0; i < 3; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("%d %d ", lcm(numbers), hcf(numbers));
}

int lcm(int numbers[3]) {
  int greater, result;

  greater = numbers[2];
  
  while (1) {
    if((greater % numbers[0] == 0) && (greater % numbers[1] == 0) && (greater % numbers[2] == 0)) {
      result = greater;
      break;
    }

    greater++;
  }

  return result;
}

int hcf(int numbers[3]) {
  int greater, result = 1;

  greater = numbers[2]; 
  
  while (1) {
    if((numbers[0] % greater == 0) && (numbers[1] % greater == 0) && (numbers[2] % greater == 0)) {
      result = result * greater;
      break;
    }

    greater--;
  }

  return result;
}
