#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;


int desempilha (celula *p, int *y){
    celula *lixo;
    lixo = p->prox;
    if(lixo == NULL){
        return 0;
    }else{
        p->prox = lixo->prox;
        *y = lixo->dado;
        free(lixo);
        return 1;
    }
}

