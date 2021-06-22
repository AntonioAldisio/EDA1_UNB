#include <stdio.h>
#include <stdlib.h>



int calculeFibonnaci(int i){
    if (i == 1 || i == 0){
        return 1;
    }else {
        return calculeFibonnaci(i - 1)+ calculeFibonnaci(i - 2);
    }
}


int main (){
    
    int resultado;
    int entrada;
    scanf("%d",&entrada);
 
    for (int j =0; j < entrada; j++){
        if(j == 0){
            printf("1: %d\n" ,calculeFibonnaci(j));
        }else {
        printf("%d: %d\n",j ,calculeFibonnaci(j));
        }
    }


}