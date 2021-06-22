#include <stdio.h>
#include <stdlib.h>

float pot(int base, int potencia ){

    if(potencia == 0 && base !=0){
        return 1;
    }else if(potencia == 1){
        return base;
    }else if (potencia < 0){
        return (pot(base, (potencia + 1))/base);   
    }else{
        return (pot(base, (potencia - 1))*base);
    }
}

int main(){
    int base, potencia;
    scanf("%d %d", &base , &potencia);
    if (base == 0 && potencia <= 0){
        printf("indefinido \n");  
    }else if (potencia < 0 && base != 0){
        printf("%.3f \n", pot(base, potencia));
    }else if (potencia >= 0) {
        printf("%.1f \n", pot(base, potencia));
    }


    return 0;
}