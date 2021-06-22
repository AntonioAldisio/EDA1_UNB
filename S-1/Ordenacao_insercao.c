#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}


int main() {
    int m, n;
    int *vetor;
   scanf("%d", &n);
    scanf("%d",&m);


	vetor = (int *) malloc(n*sizeof(int));
    resultado = (int *) malloc(m*sizeof(int));

    for(int i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	} int *resultado;

	

    for(int j = 0; j < m; j++){
        scanf("%d", &m);
        resultado[j] = binarySearch(vetor,0, n, m);
    }
    for(int z = 0; z < m; z++){
        (resultado[z] == -1) ? printf("-1\n"): printf("%d\n",resultado[z]);
    }
	free(vetor);
    free(resultado);
		
	
	return 0;
}