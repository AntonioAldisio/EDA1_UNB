#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
struct celula *topo;
struct celula *base;
} celula;

celula *le;

celula *criarLista(void){
   le = malloc (sizeof (celula));
   le->base = NULL;
   le->topo = NULL;
   return le;

}

celula *insere_inicio (int x){
    celula *new;
    new = malloc(sizeof(celula));
    new->dado = x;
    new->prox = NULL;
    if(le->topo == NULL){
        le->base = new;
        le->topo = new;
    }else{
        le->base->prox = new;
        le->base = new;
    }
}

int remover (void){
    int *y;
    celula *lixo;
    lixo = le->topo;
    y = lixo->dado;
    le->topo = lixo->prox;
    if(le->topo == NULL){
        le->base == NULL;
    }
    return y;
}


int main(){
    
    criarLista();
    int entrada;
    
    scanf("%d",&entrada);
    
    for(int i= 1; i<=entrada;i++){
         insere_inicio(i);
    }

    printf("Cartas descartadas:");
    for(int i = 0; i<entrada-1; i++){    
        if(i <entrada-2){
            printf(" %d,", remover());
        }else{
            printf(" %d", remover());
        }
        insere_inicio(remover());
    }
    printf("\n");
    printf("Carta restante: %d\n", remover());
    

    return 0;
}