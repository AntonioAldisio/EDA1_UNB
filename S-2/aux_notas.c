#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
  char matricula[10];
  double mediaAtividades;
  double mediaProvas;
  struct celula *prox;
} celula;

celula * cria_lista1(){

	celula *l1 = malloc(sizeof(celula));
	l1->prox=NULL;
	return l1;

}

celula * cria_lista(){
	celula *le = malloc(sizeof(celula));
	le->prox=NULL;

	return le;

}
celula * cria_lista2(){

	celula *l2 = malloc(sizeof(celula));

	l2->prox= NULL;

	return l2;
}
void insere_inicio(celula *le, char matricula[10], 
                   double mediaA, double mediaP){
	int i;
	celula *novoEle= malloc(sizeof(celula));
	if(novoEle==NULL){
	 //return 0;
	 }
	
	for(i=0;i<10;i++){
		novoEle->matricula[i]=matricula[i];
	}
	novoEle->mediaAtividades= mediaA;
	novoEle->mediaProvas= mediaP;
	novoEle->prox= le->prox;
	le->prox=novoEle;

}





void relatorioMediaAtividades (celula *le, celula *l1, celula *l2, double  media){
    double aux;

    for(le= le->prox;le!=NULL;le=le->prox) {   
            aux = le->mediaAtividades;
            if(aux<=media){
                l1->prox= le->prox;
                l1= l1->prox;
            }else{
                l2->prox = le->prox;
                l2=l2->prox;
        }
    }
}

void imprime(celula *le){
	celula *x;
for( x= le->prox;x!=NULL;x=x->prox){
	printf("le= %s -> %.2lf  -> %.2lf  ", x->matricula, x->mediaAtividades, x->mediaProvas);
}
printf("\n");

}

void imprime1(celula *l1){
	celula *y;
for( y= l1->prox;y!=NULL;y=y->prox){
	printf("l1= %s -> %.2lf  -> %.2lf  ", y->matricula, y->mediaAtividades, y->mediaProvas);
}
printf("\n");

}

void imprime2(celula *l2){
	celula *z;
for( z= l2->prox;z!=NULL;z=z->prox){
	printf("l2= %s -> %.2lf  -> %.2lf   ", z->matricula, z->mediaAtividades, z->mediaProvas);
}
printf("\n");

}
	
int main(){
		
	int op=5;
	celula *le;
	celula *l1;
	celula *l2;
	char matricula[10];
    double mediaAtividades;
    double mediaProvas;

 

		double media;
	while(op!=0){
	printf("\n 1 para criar\n 2 para inserir\n 3 para imprimir\n4 para fazer relatorio\n5 para remover o seguinte\n6 para remover elemento\n7 para remover todos os elementos x\n8 para inserir elemento antes de x\n");
	scanf("%d", &op);
	if(op==1){
		le = cria_lista();
        l1 = cria_lista1();
        l2 = cria_lista2();
	}
	if(op==2){
		printf("digite a matricula, mediaA, mediaP \n");
			scanf("%s", matricula);
			scanf("%lf", &mediaAtividades);
			scanf("%lf", &mediaProvas);
			
			insere_inicio(le,matricula,mediaAtividades,mediaProvas);
		}
		if(op==3){
			imprime(le);
			imprime1(l1);
			imprime2(l2);
			printf("\n");
			
		}
		
		if(op==4){
		
			printf("digite a media\n");
			scanf("%lf", &media);
			relatorioMediaAtividades(le, l1, l2, media);
			
		}}
	
		
		return 0;
		
	}
	



	
