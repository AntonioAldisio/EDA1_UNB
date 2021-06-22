#include <stdio.h>
#include <stdlib.h>
 

typedef struct lista{ 
int dados; 
struct lista *prox; 

struct lista *inicio;
 
struct lista *fim; 
}lista; 

lista *inicia(){ 
lista p = (lista)malloc(sizeof(lista)); 
p->fim = NULL; 
p->inicio = NULL; 

return p; 

} 

lista *inserir(lista *p, int x){ 
lista l = (lista)malloc(sizeof(lista)); 
if(l==NULL){
	return 0;
}
l->dados = x; 
l->prox = NULL; 
if(p->inicio==NULL){ 
  
  p->fim = l;
  
  p->inicio = l;  
}else if(p->inicio!=NULL){
 
  p->fim->prox = l; 
  p->fim = l; 

} 

} 


int remover(lista *p, int *sobra){ 


lista *l = p->inicio; 

sobra = l->dados; 
p->inicio = l->prox; 

if(p->inicio==NULL) {


  p->fim = NULL; 

}
return sobra; 
} 

int main(){ 
int tam;
int i;
int carta;
int sobra=0;

int cont; 
lista *fila; 

fila = inicia(); 
cont=0;
  scanf("%d", &tam); 
   cont = tam; 
   
   for(i=1;i<=tam;i++){ 
   
    inserir(fila, i); 
   
   } 
   printf("Cartas descartadas:"); 
   while(cont!=2){ 
    printf(" %d,", remover(fila,sobra)); 
    inserir(fila, remover(fila,sobra)); 
    
    cont--; 
   }
   printf(" %d\n", remover(fila,sobra)); 

  
   if(!fila->inicio==NULL){
   
    printf("Carta restante: %d\n", remover(fila, sobra)); 
	
	
	}
return 0; 

}