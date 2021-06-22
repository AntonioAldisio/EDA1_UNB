#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;


int empilha (celula *p, int x){
    celula *new;
    new = malloc(sizeof(celula));
    if(new == NULL){
        return 0;
    }
    new ->prox = p ->prox;
    new ->dado = x;
    p  ->prox = new;
    return 1;
}

