#include <stdlib.h>;
#include <time.h>;

int matriznumeros[5][5];
int ale=0;

main()
{
for (i=0; i<5, i++)
{
    for (j=0; j<5; j++)
    {
        ale=rand()%11;
        matriznumeros[i][j]=ale;
    }
}

for (i=0; i<5; i++){
    for (j=0; j<5; j++)
        {
        printf ("Matriz de nros aleatorios");
        printf ("%d", matriznumeros[i][j]);
        }

/*hasta aca con numeros
-------------------------------------------------

/*Tarea:

1) Generar dos arreglos de 5*5 con letras minusculas el 1ro y pasarlos al 2do pero en mayusculas

2) Un arreglo de 250*250 con numeros reales entre 0 y 1000, mostrar y calcular el promedio

*/
