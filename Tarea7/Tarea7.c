#include <stdio.h>
#include <stdlib.h>

float **crearMatriz(int filas, int columnas){
    float **m;
    int i;

    m = (float**) malloc(filas * sizeof(float*));

    for(i = 0;i<filas;i++){
        m[i] = (float*) malloc(columnas * sizeof(float));
    }

    return m;
}

void liberarMatriz(float **m, int filas)
{
    int i;
    for(i = 0;i<filas;i++){
        free(m[i]);
    }
    free(m);
}

void leerTeclado(float **m, int filas, int columnas)
{
    int i,j;

    for(i = 0;i<filas;i++){
        for(j = 0;j<columnas;j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%f",&m[i][j]);
        }
    }
}

void mostrarMatriz(float **m, int filas, int columnas){
    int i,j;

    for(i = 0;i<filas;i++){
        for(j = 0;j<columnas;j++){
            printf("%8.2f ",m[i][j]);
        }
        printf("\n");
    }
}

void leerArchivo(float **m, int filas, int columnas, char nombre[]){
    FILE *f;
    int i,j;

    f = fopen(nombre,"r");

    if(f == NULL){
        printf("Error al abrir archivo\n");
        return;
    }

    for(i = 0;i<filas;i++){
        for(j = 0;j<columnas;j++){
            fscanf(f,"%f,",&m[i][j]);
        }
    }

    fclose(f);
}

void sumaMatrices(float **a,float **b,float **r,int filas,int columnas){
    int i,j;

    for(i = 0;i<filas;i++){
        for(j = 0;j<columnas;j++){
            r[i][j] = a[i][j]+b[i][j];
        }
    }
}

void restaMatrices(float **a,float **b,float **r,int filas,int columnas){
    int i,j;

    for(i = 0;i<filas;i++){
        for(j = 0;j<columnas;j++){
            r[i][j]=a[i][j]-b[i][j];
        }
    }
}

void multiplicarMatrices(float **a,float **b,float **r,int f1,int c1,int c2){
    int i,j,k;

    for(i = 0;i<f1;i++){
        for(j = 0;j<c2;j++){
            r[i][j]=0;
            for(k = 0;k<c1;k++){
                r[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

int main(){

    int f1,c1,f2,c2,opcion,metodo;
    float **A,**B,**R;

    printf("Filas matriz A: ");
    scanf("%d",&f1);

    printf("Columnas matriz A: ");
    scanf("%d",&c1);

    printf("Filas matriz B: ");
    scanf("%d",&f2);

    printf("Columnas matriz B: ");
    scanf("%d",&c2);

    A = crearMatriz(f1,c1);
    B = crearMatriz(f2,c2);

    printf("\n1. Leer matrices desde teclado\n");
    printf("2. Leer matrices desde archivo\n");
    scanf("%d",&metodo);

    if(metodo == 1){
        printf("\nMatriz A\n");
        leerTeclado(A,f1,c1);

        printf("\nMatriz B\n");
        leerTeclado(B,f2,c2);
    }
    else{
        char archivoA[50],archivoB[50];

        printf("Archivo matriz A: ");
        scanf("%s",archivoA);

        printf("Archivo matriz B: ");
        scanf("%s",archivoB);

        leerArchivo(A,f1,c1,archivoA);
        leerArchivo(B,f2,c2,archivoB);
    }

    printf("\n1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    scanf("%d",&opcion);

    if(opcion == 1){
        if(f1 == f2 && c1 == c2){
            R = crearMatriz(f1,c1);
            sumaMatrices(A,B,R,f1,c1);
            mostrarMatriz(R,f1,c1);
        }
        else{
            printf("No se pueden sumar\n");
        }
    }

    if(opcion == 2){
        if(f1 == f2 && c1 == c2){
            R = crearMatriz(f1,c1);
            restaMatrices(A,B,R,f1,c1);
            mostrarMatriz(R,f1,c1);
        }
        else{
            printf("No se pueden restar\n");
        }
    }

    if(opcion == 3){
        if(c1 == f2){
            R = crearMatriz(f1,c2);
            multiplicarMatrices(A,B,R,f1,c1,c2);
            mostrarMatriz(R,f1,c2);
        }
        else{
            printf("No se pueden multiplicar\n");
        }
    }

    liberarMatriz(A,f1);
    liberarMatriz(B,f2);

    return 0;
}
