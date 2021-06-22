#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
char matricula[10];
double mediaAtividades;
double mediaProvas;
struct celula *prox;
} celula;



void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double  media){
    double aux;
    for(le = le->prox;le!=NULL;le=le->prox) {   
            aux = le->mediaAtividades;
            if(aux<=media){
                l1->prox= le;
                l1=le;
            }else{
                l2->prox = le;
                l2=le;
        }
    }
    l1->prox = NULL;
    l2->prox = NULL;
}