#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
    int valor, achou, w, teste, entrada, posicao, verifica;
    int *vetor;
    int soma = 0;
    int posicaoAnterior = 0;

    scanf("%d", &entrada);
    scanf("%d", &verifica);

    vetor = (int *) malloc(entrada*sizeof(int));


    for(int i =0 ; i < entrada; i++){
        scanf("%d",&vetor[i]);
    }


    
    for(int j= 0; j< verifica; j++){
        scanf("%d",&valor);
        teste = 0;
        w = 0;
        while ((w < entrada) && (!teste)) {
            if (vetor[w] == valor){
                teste = 1;
            }else{
                w++;
            }
        }
        soma = soma + abs (posicaoAnterior -  w);   
        posicaoAnterior = w; 
     
        
    }
    printf("%d \n", soma);

    free(vetor);

    return 0;
}