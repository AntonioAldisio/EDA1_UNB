#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica (char str[], char sub[], int i, int j){
    if(sub[j]== '\0'){
        return j;
    }
    if(str[i] != sub[j]){
        return -1;
    }
    if(str[i] == '\0'){
        return -1;
    }
    return verifica(str,sub,i+1,j+1);
}

int calculo_incio (char str[], char sub[], int index){
    if(str[index] == sub[0]){
        if(verifica(str,sub,index+1,1)!= -1){
            return index;
        }
    }
    if(str[index] == '\0'){
        return 0 ;
    }
    return calculo_incio(str,sub,index+1);
}

int calculo_final(char str[], char sub[], int index){
    if(str[index] != '\0'){
        int x = calculo_final(str,sub,index+1);
        if(x!=0){
            return x;
        }
    }
    if(str[index] == sub[0]){
        int y = verifica(str,sub,index+1,1);
        if(y != -1){
            return index+y;
        }
    }
    return 0;
}


int main(){

    char str[100];
    char sub[100];


    scanf("%s", str);
    scanf("%s", sub);
    
    printf("%d \n",(calculo_final(str,sub,0)- calculo_incio(str,sub,0)));


    return 0 ;
}