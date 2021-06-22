#include<stdio.h>



int main(){

   int tamanho = 4;
   int entrada[tamanho];
   int i;
   int maior;
   

   for(i = 0; i< tamanho; i++){
       scanf("%d", &entrada[i]);
   }

   maior = entrada[0];

   for (i = 1; i< tamanho; i++){
       if(entrada[i]>maior){
           maior = entrada[i];
       }
   }

    printf("%d \n", maior);

    return 0;
}