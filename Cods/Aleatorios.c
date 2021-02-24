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
ahora lo mismo con caracteres

a=97    z=122 calculo la distancia  122-97=25
A=65    Z=90    90-65=25*/


char matrizletras[5][5];

main()
for (i=0; i<5, i++)
    for (j=0; j<5; j++)
    {
        matrizletras[i][j]=97+rand()%26;
    }


for (i=0; i<5; i++){
    for (j=0; j<5; j++)
        {
        printf ("Matriz de letras aleatorias");
        printf ("%d", matrizletras[i][j])
        }
}

-------------------------------------------------

/*Si queremos hacer numeros reales...

0,01*rand%1001;

esto me tira de 0,00 a 10,00*/


float reales[5][5];

main()
for (i=0; i<5, i++)
    for (j=0; j<5; j++)
    {
        matrizreales[i][j]=(float)(0.01*rand()%1001);
    }


for (i=0; i<5; i++){
    for (j=0; j<5; j++)
        {
        printf "Matriz de nros aleatorios";
        printf ("%4,2f", matrizreales[i][j]);
        }
}

/*Tarea:

1) Generar dos arreglos de 5*5 con letras minusculas el 1ro y pasarlos al 2do pero en mayusculas

2) Un arreglo de 250*250 con numeros reales entre 0 y 1000, mostrar y calcular el promedio

*/
