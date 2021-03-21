/*#include <stdio.h>

int calcula(int n, int type) { 
    n = n - (type * (n / type));
    return n;
} 

int main(void) {

  int number = 0;
  scanf("%i", &number);
  
  if(number >= 100){
    printf("%i notas de R$ 100\n", number / 100);
    number = calcula(number, 100);
  }

  if(number >= 50){
    printf("%i notas de R$ 50\n", number / 50);
    number = calcula(number, 50);
  }

  if(number >= 20){
    printf("%i notas de R$ 20\n", number / 20);
    number = calcula(number, 20);
  }

  if(number >= 10){
    printf("%i notas de R$ 10\n", number / 10);
    number = calcula(number, 10);
  }

  if(number >= 5){
    printf("%i notas de R$ 5\n", number / 5);
    number = calcula(number, 5);
  }

  if(number >= 2){
    printf("%i notas de R$ 2\n", number / 2);
    number = calcula(number, 2);
  }

  if(number >= 1){
    printf("%i notas de R$ 1\n", number / 1);
    number = calcula(number, 1);
  }

  return 0;
}*/