#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n;
    int *numeros;
    FILE *archivo;

    printf("Cantidad de numeros aleatorios a generar: ");
    scanf("%d",&n);

    // Crear archivo con numeros aleatorios
    archivo = fopen("numeros.txt","w");

    srand(time(NULL));

    for(int i=0;i<n;i++){
        int num = rand()%1000;
        fprintf(archivo,"%d\n",num);
    }

    fclose(archivo);

    printf("Archivo creado con numeros aleatorios.\n");

    // Memoria dinamica
    numeros = (int*) malloc(n * sizeof(int));

    if(numeros == NULL)
    {
        printf("Error de memoria\n");
        return 1;
    }

    // Leer archivo
    archivo = fopen("numeros.txt","r");

    for(int i=0;i<n;i++){
        fscanf(archivo,"%d",&numeros[i]);
    }

    fclose(archivo);

    // Ordenar numeros (Bubble Sort)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(numeros[j] > numeros[j+1]){
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    // Guardar numeros ordenados
    archivo = fopen("numeros_ordenados.txt","w");

    for(int i=0;i<n;i++){
        fprintf(archivo,"%d\n",numeros[i]);
    }

    fclose(archivo);

    free(numeros);

    printf("Numeros ordenados guardados en numeros_ordenados.txt\n");

    return 0;
}
