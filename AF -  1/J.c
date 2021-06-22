#include <stdio.h>


void separaLinhaCSV(char linha[240]){

    char virgula = 44;

    struct  tipoFiliacao{
        char nome[80];
        char nomeMae[80];
        char nomePai[80];
    };

    struct tipoFiliacao teste;
    int verificacao = 0;


    for(int i = 0; i <= 240 ;i++){
        if(',' == virgula && verificacao == 0){
            for(int count = 0; count <i; count++){
                teste.nome[count] = linha[count];
            }
            verificacao++;
        }
    }
    printf("%s\n", teste.nome);
    //printf("%c\n", teste.nomeMae);
    //printf("%c\n", teste.nomePai);

    
}

int main(){

    char teste[240] = {"A, A, F"};
    separaLinhaCSV(teste);


    return 0;
}