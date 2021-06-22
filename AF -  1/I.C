#include <stdio.h>

int main(void) {
  int num;
  int i; 
  int soma;
  int x;
  int teste = 1;

  while (scanf("%d", &num)== 1 && num) {
    soma = 0;
    for (i = 0;i<num;i++){
        scanf("%d",&x);
        soma = soma + x;
    }
    printf("Teste %d \n", teste++);
    printf("%d \n", soma);
    
    }
  return 0;
}
