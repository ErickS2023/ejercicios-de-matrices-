
//ejercicios matriz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
int main() {
	int opc;
    int matriz1, matriz2, op;
    int a[5] [5]={{0,0,7,1,0},{1,2,4,5,1},{2,4,2,3,2},{3,6,0,4,3},{4,8,2,5,4}};
	int i,j;
    srand(time(NULL));    
    op = rand() %5+1;
    
	switch(op)
	{
		
	printf("¿Qué operación deseas realizar?: ");
	 
	
        printf("1 Suma");
        break;
        printf("2 Resta");
        break;
        printf("3 Multiplicación");
        break;
        printf("4 Diagonal");
        break;
        printf("5 Triangular superior");
        break;
        printf("6 Terminar el programa");
        break;
        
		opc = int(input());
        
        if opcion == 6:
            break
        
        n = int(input("Ingresa el tamaño de las matrices: "))
        matriz1 = crear_matriz(n)
        matriz2 = crear_matriz(n)
        
        if opcion == 1:
            resultado = matriz1 + matriz2
            print(f"La suma de las matrices es:\n{resultado}");
            
        elif opcion == 2:
            resultado = matriz1 - matriz2
            print(f"La resta de las matrices es:\n{resultado}");
            
        elif opcion == 3:
            resultado = np.dot(matriz1, matriz2)
            print(f"El producto de las matrices es:\n{resultado}");
            
        elif opcion == 4:
            diagonal = np.diagonal(matriz1)
            print(f"La diagonal de la matriz es:\n{diagonal}");
            
        elif opcion == 5:
            triangular = triangular_superior(matriz1)
            print(f"La suma del triángulo superior es: {triangular}");
            
        else:
            printf("Opción inválida.");
        

	}
            
            
    }
	matriz1 = rand() % 10 + 1;
    matriz2 = rand() % 10 + 1;
    op = rand() %5+1;
	    switch (op)
    {
        int main();
    while:
        


	return 0;
	
	}

