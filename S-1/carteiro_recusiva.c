#include <stdio.h>
#include <stdlib.h>

int busca(long int arr[], int l, int r, int x)
{
     if (r < l)
        return -1;
     if (arr[l] == x)
        return l;
     if (arr[r] == x)
        return r;
     return busca(arr, l+1, r-1, x);
}


int main(){
    int valor, achou, entrada, verifica;
    int soma = 0;
    int posicaoAnterior = 0;

    scanf("%d", &entrada);
    scanf("%d", &verifica);
    
    long int vetor[entrada];


    //vetor = (int *) malloc(entrada*sizeof(int));

    for(int i =0 ; i < entrada; i++){
        scanf("%ld",&vetor[i]);
    }
    
    for(int j= 0; j< verifica; j++){
        scanf("%d",&valor);
        int w = busca(vetor,0,entrada-1,valor);
        
        soma = soma + abs (posicaoAnterior -  w);   
        posicaoAnterior = w; 
     
    }
    printf("%d \n", soma);

 //   free(vetor);

    return 0;
}