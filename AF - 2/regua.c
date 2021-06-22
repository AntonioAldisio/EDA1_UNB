#include <stdio.h>
#include <stdlib.h>

void regua (int n){
    if(n == 1)printf(".- \n");
    else{
        regua (n -1);
        
        printf(".");        
        for (int i = 0; i< n; i++) printf ("-");
        printf("\n");
        
        regua(n-1);
    }
}

int main(){

    int entrada;
    scanf("%d",&entrada);    
    
    if (entrada >0){
        regua(entrada);
    }

    return 0;
}