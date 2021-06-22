#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int dado;
    struct lista *prox;
}Lista;

typedef struct fila{
    Lista *topo;
    Lista *fim;
}Fila;

Fila *f;

void criar(){
    f = (Fila*)malloc(sizeof(Fila));
    f->topo = NULL;
    f->fim  = NULL;
}

void inserir(int c){
    Lista *new = (Lista*)malloc(sizeof(Lista));
    new->dado = c;
    new->prox = NULL;
    if(f->topo == NULL){
        f->topo = new;
        f->fim  = new;
    }else{
        f->fim->prox = new;
        f->fim = new;
    }
}

int retirar(){
    int y;
    Lista *lixo;
    lixo = f->topo;
    y = lixo->dado;

    f->topo =lixo->prox;
    if(f->topo == NULL){
        f->fim = NULL;
    }
    free(lixo);
    return y;
}

int main(){
    int count;
    int entrada;
    

    criar();
    do{
        scanf("%d", &entrada);
        count = entrada;
        for(int i =1; i<entrada;i++){
            inserir(entrada);
        }
        printf("Cartas descartadas:");
        for(int i = count; count!=1; i--){
            printf(" %d", retirar());
            inserir(retirar());

            if(count != 2){
                printf(",");
            }
        }
        if(f->topo == NULL){
            printf("Carta restante: %d\n",retirar());
        }
    }while(count !=0);
    return 0;
}