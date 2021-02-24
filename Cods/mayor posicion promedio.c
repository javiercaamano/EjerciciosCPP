#include <stdio.h>
#include <stdlib.h>
#define n 3

int main()
{
    int i; int v[n]; int c=0; int mayor=0; int posicion;
    float prom=0;
    for (i=0; i<n; i++){
    do {
    printf("Ingrese la nota  num%d: ", i+1);
    scanf("%d", &v[i]);
    }while(v[i]<0 || v[i]>10);
    c=c+v[i];
    }
    prom=(float)c/n;
    printf("\nLAS NOTAS INGRESADAS SON LAS SIGUIENTES: \n");
    for (i=0; i<n; i++){
    if (v[i]>=mayor) {
        mayor=v[i];
        posicion=i+1;
    }
    printf("\nNota num%d: %1d", i+1, v[i]);

    }
printf("\n----------------------------------");
printf("\n----------------------------------\n");
printf("El promedio es: %2.2f", prom);
printf("\n----------------------------------");
printf("\n----------------------------------\n");
printf("Listado de notas en sentido inverso: ");
for (i=0; i<n; i++){
    printf("\nNota  num%d: %1d", 10-i, v[9-i]);

    }
printf("\n----------------------------------");
printf("\n----------------------------------\n");
printf("La nota mayor es %d y su posicion es: %d", mayor, posicion);
    return 0;
}
