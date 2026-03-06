#include <stdio.h>

void main(void)
{
char p1, p2, p3 = '$';
printf("\nIngrese un caracter: ");
p1=getchar();
putchar(p1);
printf("\n");
fflush(stdin);

printf("\n");
fflush(stdin);

printf("\nEl caracter p3 es: ");
putchar(p3);
printf("\nIngrese otro caracter: ");
fflush(stdin);
scanf("%c", &p2);
printf("%c", p2);
}

#include <stdio.h>
#include <ctype.h>

void main(void)
{
charp1;
printf("\nIngrese un caracter para analizar si éste es un dígito: ");
p1 = getchar();
if(isdigit (p1))
    printf("%c es un dígito \n", p1);
else
    printf("%c no es un dígito \n", p1);

fflush(stdin);
printf("\nIngrese un caracter para examinar si éste es una letra: ");
p1 = getchar();
if(isalpha (p1))
    printf("%c es una letra \n", p1);
else
    printf("%c no es una letra \n", p1);
fflush(stdin);
printf("\nIngrese un caracter para examinar si éste es una letra minúscula: ");
p1 = getchar();
if(isalpha (p1))
if (islower (p1))

    printf("%c es una letra minúscula \n", p1);
else
    printf("%c no es una letra minúscula \n", p1);
else
printf("%c no es una letra \n", p1);
fflush(stdin);
printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
p1 = getchar();
if(isalpha (p1))
if(isupper(p1))
printf("%c fue convertida de mayúscula a minúscula \n", tolower(p1));
else
printf("%c es una letra minúscula \n", p1);
else
printf("%c no es una letra \n", p1);
}

#include <stdio.h>

void main(void)
{
char *cad0 = "Buenos días";
char cad1[20] = "Hola";
char cad2[] = "México";

char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
char cad4[20], cad5[20], cad6[20];
printf("\nLa cadena cad0 es: ");
puts(cad0);

printf("\nLa cadena cad1 es: ");
printf("%s", cad1);
printf("\nLa cadena cad2 es: ");
puts(cad2);
printf("\nLa cadena cad3 es: ");
puts(cad3);

printf("\nIngrese una línea de texto —se lee con gets—: \n");
gets(cad4);
printf("\nLa cadena cad4 es: ");
puts(cad4);
fflush(stdin);
printf("\nIngrese una línea de texto —se lee con scanf—: \n");
scanf("%s", cad5);
printf("\nLa cadena cad5 es: ");
printf("%s", cad5);
fflush(stdin);
charp;
int = 0;

while((p = getchar())!= '\n')
cad6[i++] = p;
cad6[i] = '\0';
printf("\nLa cadena cad6 es: ");
puts(cad6);
}


#include <stdio.h>
#include <string.h>

struct alumno
{
int matricula;
char nombre[20];
char carrera[20];
float promedio;
char direccion[20];
};
void main(void)
{
char nom[20], car[20], dir[20];
int mat;
float pro;

printf("\nIngrese la matrícula del alumno 2: ");
scanf("%d", &a2.matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno 2:");
gets(a2.nombre);
printf("Ingrese la carrera del alumno 2: ");
gets(a2.carrera);
printf("Ingrese el promedio del alumno 2: ");
scanf("%f", &a2.promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno 2: ");
gets(a2.direccion);

printf("\nIngrese la matrícula del alumno 3: ");
scanf("%d", &mat);
a3.matricula = mat;
fflush(stdin);
printf("Ingrese el nombre del alumno 3: ");
gets(nom);

strcpy(a3.nombre, nom);
printf("Ingrese la carrera del alumno 3: ");
gets(car);
strcpy(a3.carrera, car);
printf("Ingrese el promedio del alumno 3: ");
scanf("%f", &pro);
a3.promedio = pro;
fflush(stdin);
printf("Ingrese la dirección del alumno 3: ");
gets(dir);
strcpy(a3.direccion, dir);

printf("\nDatos del alumno 1\n");
printf("%d\n", a1.matricula);
puts(a1.nombre);
puts(a1.carrera);
printf("%.2f\n", a1.promedio);
puts(a1.direccion);

printf("\nDatos del alumno 2\n");
printf("%d\n", a2.matricula);
puts(a2.nombre);
puts(a2.carrera);
printf("%.2f\n", a2.promedio);
puts(a2.direccion);

printf("\nDatos del alumno 3\n");
printf("%d \t %s \t %s \t %.2f \t %s3", a3.matricula, a3.nombre, a3.carrera,
a3.promedio, a3.direccion);
}


#include <string.h>

struct alumno
{
int matricula;
char nombre[20];
char carrera[20];
float promedio;
char direccion[20];
};
void Lectura(struct alumno *);

void main(void)
{
struct alumno a0 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
struct alumno *a3, *a4, *a5, a6;
a3 = &a0;

a4 = new(struct alumno);

printf("\nIngrese la matrícula del alumno 4: ");
scanf("%d", &(*a4).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno 4: ");
gets(a4->nombre);
printf("Ingrese la carrera del alumno 4: ");
gets((*a4).carrera);
printf("Ingrese promedio del alumno 4: ");
scanf("%f", &a4->promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno 4: ");
gets(a4->direccion);

a5 = new(struct alumno);
Lectura(a5);
Lectura(&a6);
printf("\nDatos del alumno 3\n");

printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera,
a3->promedio, a3->direccion);

printf("\nDatos del alumno 4\n");
printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera,
a4->promedio, a4->direccion);

printf("\nDatos del alumno 5\n");
printf("%d\t%s\t%s\t%f\t%s", a5->matricula, a5->nombre, a5->carrera,
a5->promedio, a5->direccion);

printf("\nDatos del alumno 6\n");

printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera,
a6.promedio, a6.direccion);
}

void Lectura(struct alumno *a)

{
printf("\nIngrese la matrícula del alumno: ");
scanf("%d", &(*a).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese la carrera del alumno: ");
gets((*a).carrera);
printf("Ingrese el promedio del alumno: ");
scanf("%f", &a->promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno: ");
gets(a->direccion);
}
