#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int sumaenteros (int x, int y);
int productoenteros (int x, int y);
int cuadrado(int x);
char maymin (char c);
char * strmaymin (char * cadena);
int main()
{
    int a, b, r, i, d=0;
    char c, e, s[30]="CaDeNa";
    /*for (i=0; i<29; i++){
        s[i]='a'+rand()%26;
        if (i%2)
            s[i]=toupper(s[i]);
    }*/
    printf("Ingrese dos enteros: ");
    scanf("%d %d", &a, &b);
    r=sumaenteros(a, b);
    printf("\nLa suma de los enteros es: %d", r);
    r=productoenteros(a, b);
    printf("\nEl producto de los enteros es: %d", r);
    r=cuadrado(a);
    printf("\nEl cuadrado del primer entero es: %d", r);
    printf("\n--------------------------------------------------");
    printf("\nIngrese dos caracteres uno en mayuscula y el otro minuscula: ");
    fflush(stdin);
    scanf("%c %c", &c, &e);

    printf("\nEl caracter invertido (mayuscula/minuscula): \n%c\n%c", maymin(c), maymin(e));

    printf("\nLa cadena inversa de %s \n", s);
    printf("es %s \n", strmaymin(s));
    return 0;
}
int sumaenteros(int x, int y){
int r=0;
r=x+y;
return r;
}
int productoenteros(int x, int y){
int r=0;
r=x*y;
return r;
}
int cuadrado(int x){
int r=0;
r=x*x;
return r;
}
char maymin(char c){
    if(isupper(c))
       return tolower(c);
    if(islower(c))
    return toupper(c);
    return 0;
}
char * strmaymin (char * cadena){
int i=0;
while (cadena[i]){
    if (isupper(cadena[i]))
        cadena[i]=tolower(cadena[i]);
    else
        cadena[i]=toupper(cadena[i]);
i++;
}

return cadena;
}
