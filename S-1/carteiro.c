#include <stdio.h>
#include <stdlib.h>


int busca(long int arr[], int l, int r, int x){
    while (l<=r){
        if(arr[l]== x){
            return l;
        }
        if (arr[r] == x){
            return r;
        }
        l +=1;
        r -=1;
     }
    return -1;
}

int main(){
    int valor;
    long int *vetor;
    long int entrada;
    int verifica;
    int antigo = 0;
    int soma = 0;

    scanf("%ld", &entrada);
    scanf("%d", &verifica);

    vetor = (long int *) malloc(entrada*sizeof(long int));

    for(int i =0 ; i < entrada; i++){
        scanf("%ld",&vetor[i]);
    }


    for(int j= 0; j< verifica; j++){
        scanf("%d",&valor);
        int w = 0;
        w = busca(vetor,0,entrada-1,valor);
        soma = soma + abs(antigo - w);
        antigo = w; 
    }
  
    printf("%d\n",soma);
    free(vetor);

    return 0;
}