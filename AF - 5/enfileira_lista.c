#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;


celula  *enfileira (celula *f, int x){
    celula *new;
    new = malloc(sizeof(celula));
    if(new == NULL){
        return NULL;
    }
    new ->prox = f ->prox;
    f ->prox = new;
    f ->dado = x;
    return new;
}
