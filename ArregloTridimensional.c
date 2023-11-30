#include <stdio.h>
int main() {
    int num_matrices, filas, columnas;

    printf("Ingrese el numero de matrices: ");
    scanf("%d", &num_matrices);
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);
//En esta parte se pide al usuario las dimensiones de las matrices y el numero de las mismas, ademas de declarar las variables
    
    int arreglo_tridimensional[num_matrices][filas][columnas]; //en este apartado se inicializa el arreglo tridimensional en ceros

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            arreglo_tridimensional[num_matrices - 1][i][j] = 1;
        }
    }
    //En este bucle se inicializa la ultima matriz en unos 
}

