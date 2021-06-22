
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 


int somarDigitos(unsigned long long numero){
    if (numero % 10 == numero )
        return numero;
    return ((numero % 10) + somarDigitos(numero / 10));
}


int main (){

    unsigned long long  entrada;    
    scanf("%lld",&entrada);
    
    if(entrada > 0){
        printf("%d \n", somarDigitos(entrada));
    }else if(entrada == 0){
        printf("0 \n");
    }

    return 0;
}


