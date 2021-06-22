#include<stdio.h>

int main(){
    
    int entrada ;
    

    scanf("%d", &entrada);

    // Primeira piramide
    for(int i = 1; i <= entrada; i++){
        for (int j = 1; j <= i; j++){
            if (i <=9){
                printf("0%d ",i);
            }else{
                printf("%d ",i);
            }
        }
    printf("\n");
    }

printf("\n");

    // Segunda piramide 

    for (int i = 1; i <= entrada; i++){
        int count = 1;
        for (int j = 1; j<= i; j++){
            while(count <= j){
                if (count <= 9){
                    printf("0%d ", count);
                    count++;
                }else{
                    printf("%d ", count);
                    count++;
                }
            }
        }
    printf("\n");
    }
    

    return 0;
}


