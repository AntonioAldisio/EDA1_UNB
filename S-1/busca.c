#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int busca_binaria (int v [], int n, int x){
    int inf = 0;
    int sup = n-1;
    int meio; 
    while (inf <= sup){
        meio = (inf+sup)/2;
        if(x ==  v[meio]){
            return (1);
        }else if(x<v[meio]){
            sup = meio -1;
        }else{
            inf = meio+1;
        }
    }
    return (0);
}

int main(){
    int inicio, fim, meio, valor, achou;
    int *vetor;
    int entrada;
    int verifica;

    scanf("%d", &entrada);
    scanf("%d", &verifica);

    vetor = (int *) malloc(entrada*sizeof(int));
    int *vetorOrdenado = (int *) malloc(entrada*sizeof(int));

    for(int i =0 ; i < entrada; i++){
        scanf("%d",&vetor[i]);
        vetorOrdenado[i] = vetor[i];
    }

    qsort(vetorOrdenado, entrada, sizeof(int), cmpfunc);
    
    for(int j= 0; j< verifica; j++){
        scanf("%d",&valor);
        int achou = busca_binaria(vetorOrdenado,entrada,valor);
        
        if (achou){
            int teste = 0;
            int w = 0;
            while ((w < entrada) && (!teste)) {
                if (vetor[w] == valor){
                    teste = 1;
                }else{
                    w++;
                }
            }
            printf("%d\n", w);
        }else{
            printf("-1\n");
        }
    }

    free(vetor);

    return 0;
}