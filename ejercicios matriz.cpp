//ejercicios matriz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int matriz1, matriz2, op;
    int a[5] [5]={{0,0,7,1,0},{1,2,4,5,1},{2,4,2,3,2},{3,6,0,4,3},{4,8,2,5,4}};
	int i,j;
    srand(time(NULL));    
    op = rand() %5+1;
    
    
	while(op<5){
	matriz1 = rand() % 10 + 1;
    matriz2 = rand() % 10 + 1;
    op = rand() %5+1;
	    switch (op)
    {
        case 1:
            printf("%d + %d = %d\n", matriz1, matriz2, matriz1 + matriz2);
            break;
        case 2:
            printf("%d - %d = %d\n", matriz1, matriz2, matriz1 - matriz2);
            break;
        case 3:
            printf("%d * %d = %d\n", matriz1, matriz2, matriz1 * matriz2);
            break;
        case 4:
            printf("%d / %d = %.2f\n", matriz1, matriz2, (float)matriz1 / (float)matriz2);
            break;
        default:
            printf("Opcion invalida\n");
            break;
        case 5:
        		int n,i,j,suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	int A[n][n];
	printf("Matriz A:\n");
	for(i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand() % (9 + 1 - 1) + 1;
			printf("%d ",A[i][j]);
			if(i==j)
			suma+=A[i][j];
		}
		printf("\n");
	}
	printf("La suma de la diagonal principal es: %d", suma);
	
	
	
	}
            
            
    }


	return 0;
	
	}

