

 
#include <stdio.h>
int main()
{
    int i,j,count=0;
    int entrada;
        
    scanf("%d",&entrada);
        
    for(i=1;i<=entrada;i++){
        for(j=1;j<=entrada-i;j++){
            printf(" ");
        }
        for(count=1;count<=i;count++){
            printf("*");
        }
        for(count=i-1;count>=1;count--){
            printf("*");
        }
       printf("\n");
    }



    return 0;
}