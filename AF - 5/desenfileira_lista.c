#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int desenfileira (celula *f, int *y){
    celula *lixo;
    lixo = f->prox;
    if(lixo == NULL){
        return 0;
    }else{
        f->prox = lixo->prox;
        *y = lixo->dado;
        free(lixo);
        return 1;
    }
}

