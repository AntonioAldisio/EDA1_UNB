#include<stdio.h>

int main(){    

    int consumo = 0;
    int assinatura = 7;
  

    int valor = 0;

    scanf("%d",&consumo);
    
    int faixa1 = consumo < 31;
    int faixa2 = !faixa1 && consumo < 101;
    int faixa3 = !faixa1 && !faixa2 && consumo >= 101;

    if (consumo > 10){
        
        if (faixa1){
            int cota1 = (consumo-10)- 20 ;
            if (cota1 == 0){
                valor = 20;
            } else {
                cota1 = consumo - 10;
                valor = cota1*1;
            }
        }
        
        if (faixa2){
            int cota2 = (consumo - 10)- 90;
            if(cota2 == 0){
                valor = valor + 160;
            }else{
                cota2 = consumo - 30 ;
                valor = cota2*2 + 20;

            } 
        }

        if (faixa3){
            int cota3 = consumo - 100;
            valor = cota3*5 + 160;
        }   

    } else {
        valor = 0;
    }
    valor = valor + assinatura;
    printf("%d \n", valor);


return 0;
}