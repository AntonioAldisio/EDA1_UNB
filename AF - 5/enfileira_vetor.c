#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

int filaCheia(fila *f){
    if((f->p == 0 && f->u == f->N-1) || f->p == f->u+1){
        return 1;
    }else{
        return 0;
    }
}


int enfileira (fila *f, int x){
    if(filaCheia(f)){
        f->dados = realloc(f->dados, f->N*sizeof(int));
        if(f->dados == NULL){    
            return 0;
        }
        f->N *=2;
    }
    f->dados[f->u] = x;
    f->u = (f->u+1)%f->N;
    return 1;
}
