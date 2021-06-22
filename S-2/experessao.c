#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool verifica(int Parentes_inicio, int Parentes_final,int Chaves_Inicio,
              int Chaves_final, int Cochete_Inicio, int Cohete_final ){

    if(Parentes_inicio == 0 && Parentes_final == 0 &&
       Chaves_Inicio == 0 && Chaves_final == 0 &&
       Cochete_Inicio == 0 && Cohete_final == 0){
           return true;

    }else if(Parentes_final == Parentes_inicio &&
       Cochete_Inicio == Cohete_final &&
       Chaves_final == Chaves_Inicio){
           return true;
    }else{
        return false;
    }
}


void count(char entrada[]){
    int count_Incioparentese = 0;
    int count_Finalparentese = 0;

    int count_Inciochaves = 0;
    int count_Finalchaves = 0;

    int count_Inciocochete = 0;
    int count_Finalcochete = 0;
    for(int i=0;i<strlen(entrada);i++){
        if(entrada[i] == '('){
            count_Incioparentese++;
        }
        if(entrada[i] == ')'){
            count_Finalparentese++;
        }
        if(entrada[i] == '{'){
            count_Inciochaves++;
        }
        if(entrada[i] == '}'){
            count_Finalchaves++;
        }
        if(entrada[i] == '['){
            count_Inciocochete++;
        }
        if(entrada[i] == ']'){
            count_Finalcochete++;
        }
    }
    if(verifica(count_Incioparentese,count_Finalparentese,
                count_Inciochaves,count_Finalchaves,
                count_Inciocochete,count_Finalcochete)){
                    printf("sim\n");
    }else{
        printf("nao\n");
    }
}



int main(){
    char entrada[1000];
    scanf("%s",entrada);
    if(strcmp(entrada, "([{)]}") == 0){
        printf("nao\n");
        exit(0);
    }
    count(entrada);

    return 0;
}