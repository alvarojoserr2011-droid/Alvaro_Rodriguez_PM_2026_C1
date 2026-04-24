#include <stdio.h>

int main() {
    float valorInicial, valorFinal, depreciacionMensual;
    int meses, opcion;
    FILE *archivo;

    printf("== CALCULO DE AMORTIZACION DE VEHICULOS ==\n");
    printf("1. Ingresar valor inicial, valor final y tiempo\n");
    printf("2. Ingresar valor inicial y tiempo (valor final = 0)\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    if(opcion == 1) {
        printf("Ingrese el valor inicial del vehiculo: ");
        scanf("%f", &valorInicial);

        printf("Ingrese el valor final del vehiculo: ");
        scanf("%f", &valorFinal);

        printf("Ingrese el tiempo en meses: ");
        scanf("%d", &meses);
    } else if(opcion == 2) {
        printf("Ingrese el valor inicial del vehiculo: ");
        scanf("%f", &valorInicial);

        valorFinal = 0;

        printf("Ingrese el tiempo en meses: ");
        scanf("%d", &meses);
    } else {
        printf("Opcion invalida.\n");
        return 1;
    }

    depreciacionMensual = (valorInicial - valorFinal) / meses;

    archivo = fopen("tabla_amortizacion.txt", "w");

    if(archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;
    }

    printf("\n%-10s %-20s\n", "Mes", "Valor del Vehiculo");
    printf("-----\n");

    fprintf(archivo, "Mes\tValor del Vehiculo\n");
    fprintf(archivo, "-----\n");

    float valorActual = valorInicial;

    for(int i = 1; i <= meses; i++) {
        valorActual -= depreciacionMensual;

        printf("%-10d %-20.2f\n", i, valorActual);
        fprintf(archivo, "%d\t%.2f\n", i, valorActual);
    }

    fclose(archivo);

    printf("\nTabla guardada en 'tabla_amortizacion.txt'\n");

    return 0;
}
