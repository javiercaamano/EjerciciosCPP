#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define n 3
int main()

{
    srand(time(NULL));
    int i, j;
    char ar[n][n], ar2[n][n], ar3[5][5];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
           ar[i][j]=65+rand()%26;
        }
    }
printf("La matriz cargada es la siguiente: \n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%c ", ar[i][j]);
        }
 printf("\n");
    }
for (i=0; i<n; i++){
        for (j=0; j<n; j++){
           ar2[i][j]=ar[rand()%3][rand()%3];
        }
    }
printf("La matriz 2 cargada es la siguiente: \n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%c ", ar2[i][j]);
        }
 printf("\n");
    }
for (i=0; i<5; i++){
        for (j=0; j<5; j++){
           ar3[i][j]=tolower(ar[rand()%3][rand()%3]);
        }
    }
printf("La matriz 3 cargada es la siguiente: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("%c ", ar3[i][j]);
        }
 printf("\n");
    }
    return 0;
}
