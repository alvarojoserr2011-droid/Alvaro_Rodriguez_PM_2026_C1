#include <stdio.h>

void main(void)
{
int CUB;
for (I = 1; I <= 10; I++)
{
    CUB = cubo();
    printf("\nEl cubo de %d es:  %d", I, CUB);
}

}
int cubo(void)
{
return (I*I*I);
}

#include <stdio.h>

void main(void)
{
int CUB;
for (I = 1; I <= 10; I++)
{
    CUB = cubo();
    printf("\nEl cubo de %d es:  %d", I, CUB);
}
}
int cubo(void)
{
int I = 2;
return (I*I*I);
}

#include <stdio.h>

void main (void)
{
int I;
for (I = 1; I <= 3; I++)
f1();
}
void f1(void)
{
int K = 2;
K += K;
printf("\nEl valor de la variable local es: %d", K);
::K = ::K + K;
printf("\nEl valor de la variable global es: %d", ::K);
}

#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int  K = 3;
{
int I;
for (I = 1; I <= 3; I++)
{
    printf("\nEl resultado de la función f1 es: %d", f1());
    printf("\nEl resultado de la función f2 es: %d", f2());
    printf("\nEl resultado de la función f3 es: %d", f3());
    printf("\nEl resultado de la función f4 es: %d", f4());
}
}
int f1(void)
{
K += K;
return (K);
}
int f2(void)
{
int K = 1;
K++;
return (K);
}
int f3(void)
{
static int K = 8;
K += 2;
return (K);
}
int f4(void)
{
int K = 5;
K = K + ::K;
return (K);
}


#include <stdio.h>

void main(void)
{
int I, NUM, CUE = 0;
int ARRE[100];
for (I=0; I<100; I++)
{
   printf("Ingrese el elemento %d del arreglo: ", I+1);
   scanf("%d", &ARRE[I]);
}
printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
scanf("%d", &NUM);
for (I=0; I<100; I++)
if (ARRE[I] == NUM)
    CUE++;
printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}

#include <stdio.h>

void main(void)
{
int ELE[5] = {0};
int I, VOT;
printf("Ingresa el primer voto (0 - Para terminar): ");
scanf("%d", &VOT);
while (VOT)
{
  if ((VOT > 0) && (VOT < 6))
  ELE[VOT-1]++;

else
printf("\nEl voto ingresado es incorrecto.\n");
printf("Ingresa el siguiente voto (0 - Para terminar): ");
scanf("%d", &VOT);
}
printf("\n\nResultados de la Elección\n");
for (I = 0; I <= 4; I++)
printf("\nCandidato %d: %d", I+1, ELE[I]);
}


#include <stdio.h>

void main(void)
{
iinntt  X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4] Z[0], Z[1], Z[2], Z[3], Z[4]);
int *IX;
IX = &X;
Y = *IX;
*IX = 1;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
