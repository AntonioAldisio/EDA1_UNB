#include<stdio.h>

int main(){
    
   int tamanho = 0;
   int entrada;
   int maior;

    while(scanf("%d", &entrada) == 1){
        tamanho++;
        if (tamanho == 1){
            maior = entrada;
        }
        if (entrada > maior){
            maior = entrada;
        }
    }

    printf("%d \n", maior);

return 0;
}