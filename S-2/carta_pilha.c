#include <stdio.h>
#include <stdlib.h>

struct celula {
int dado;
struct celula *prox;
};

typedef celula cartas;

struct desempilhaPilha{
    cartas *topo, *final;
    int n;
};
typedef struct desempilhaPilha pilha;

void criarPilha(struct pilha *p){
    p->topo = NULL;
    p->n = 0;
}

int main(){
    int entrada;
    int *descarta;
    int count =0;
    pilha p;
    scanf("%d",&entrada);
    descarta = malloc(entrada*sizeof(int));

    criarPilha();

    for(int i = entrada; i>0;i--){
        aux = (cartas*)malloc(sizeof(cartas));
        if(aux == NULL){
            break;
        }

        aux->dado = entrada;
        aux ->prox = p.topo;
        p.topo = aux;
        p.n++;
        if(entrada == 0){
            p.final = aux;
        }
    }
    while(p.n >= 2){
        aux = p.topo;
        p.topo = aux->prox;
        descarta[count] = aux->dado;
        free(aux);
        p.n--;
        count++;
        aux =

    }

    return 0;
}


