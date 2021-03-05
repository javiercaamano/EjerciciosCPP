#include <stdlib.h>;
#include <time.h>;

/*Si queremos hacer numeros reales...

0,01*rand%1001;

esto me tira de 0,00 a 10,00*/


float reales[5][5];

main(){
    for (i=0; i<5, i++){
        for (j=0; j<5; j++){
            matrizreales[i][j]=(float)(0.01*rand()%1001);
        }
    }

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf "Matriz de nros aleatorios";
            printf ("%4,2f", matrizreales[i][j]);
        }
    }
}
