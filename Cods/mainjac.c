#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[5];
    int i;
    int pos=0;
    float prom=0;
    int mayor=0;
    int suma=0;

    for(i=0;i<5;i++)

{
    do
    {printf("\ningrese la nota del alumno %d\n",i+1);
        scanf("%d",&notas[i]);
    }
    while (notas[i]<0 || notas[i]>10);
    prom=prom+notas[i];
}
prom=prom/5;
printf("\n el promedio total es %.2f\n\n",prom);
}
  suma=suma+i;
  printf("\n la suma total es %d\n\n",suma);

/* Tambien se podria hacer en la parte de prom=prom/5 ------- prom=prom/notas para que cuando sean mas notas tome el valor directamente*/

