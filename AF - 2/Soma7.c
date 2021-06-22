#include <stdio.h>
#include <stdlib.h>


long int soma7(long int n){
	if(n==0){
		return 0;
	}
	else {
		 return soma7(n/10) + (n%10==7);
	}
	
}

int main(){
	long int entrada;
    scanf("%ld", &entrada);
    
    printf("%ld\n", soma7(entrada));

    return 0;
}