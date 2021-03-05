#include <stdlib.h>;
#include <time.h>;

/*-------------------------------------------------
ahora lo mismo con caracteres

a=97    z=122 calculo la distancia  122-97=25
A=65    Z=90    90-65=25*/


char matrizletras[5][5];

main(){
    for (i=0; i<5, i++){
        for (j=0; j<5; j++){
            matrizletras[i][j]=97+rand()%26;
        }
    }

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf ("Matriz de letras aleatorias");
            printf ("%d", matrizletras[i][j]);
        }
    }
}
