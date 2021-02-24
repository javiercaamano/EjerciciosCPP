#include <stdio.h>
#include <stdlib.h>
struct almumno {
        char nombre[30];
        char legajo[8];
        float prom;
    }alu[2];
int main()
{
int i;
for (i=0; i<2; i++){
    printf("Ingrese el NOMBRE del alumno %d: ", i+1);
    fflush(stdin);
    gets(alu[i].nombre);
    printf("Ingrese el LEGAJO del alumno %d: ", i+1);
    fflush(stdin);
    gets(alu[i].legajo);
    printf("Ingrese el promedio del alumno %d: ", i+1);
    scanf("%f", &alu[i].prom);

}
    printf("\n");
for (i=0; i<2; i++) {
    printf("Alumno %d                       Legajo   Nota\n", i+1);
    printf("%-30s %8s %2.2f\n",
    alu[i].nombre,
    alu[i].legajo,
    alu[i].prom);
  /*  printf("\nNombre alumno %d: %s", i+1, alu[i].nombre);
    printf("\nLegajo alumno %d: %s", i+1, alu[i].legajo);
    printf("\nPromedio alumno %d: %2.2f", i+1, alu[i].prom);
*/
}
    return 0;
}
