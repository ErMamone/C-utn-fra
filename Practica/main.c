/*
* Mamone Eros
*
* 1. Ingresar edad (valor entero), el sexo (F o M), y el legajo de 5 personas. Indicar:
*a) Edad promedio.
*b) Cantidad de mujeres
*c) Cantidad de hombres
*d)  Edad maxima y minima
*
*2. Al ejercicio anterior agregar:
*e) Desestimar el punto b
*f) El legajo del hombre mas viejo.
*g) El legajo de la mujer mas joven
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int edad;
    char sexo;
    char hombre;
    char mujer;
    int legajo;
    int edadAcumulador;
    float edadPromedio;
    int edadMaxima;
    int edadMinima;
    int cantHombres;
    int hombreMasViejo;
    int legajoMasViejo;
    int mujerMasJoven;
    int legajoMasJoven;
    int i;

    hombre='m';
    mujer='f';
    edadPromedio=0;
    for (i=0; i<5; i++) {
        printf("Ingrese la edad: ");
        scanf("%d",&edad);
        __fpurge(stdin);

        if(i==0){
            edadMaxima=edad;
            edadMinima=edad;
            cantHombres=0;
            edadAcumulador=0;
            hombreMasViejo=edad;
            mujerMasJoven=edad;
            legajoMasViejo=0;
            legajoMasJoven=0;
        }else{
            if (edadMaxima<edad){
                edadMaxima=edad;
            }
            if (edadMinima>edad){
                edadMinima=edad;
            }
        }

        edadAcumulador= edadAcumulador+edad;

        printf("\nIngrese el sexo: (Solo f o m)");
         scanf("%c",&sexo);
        __fpurge(stdin);
        sexo=tolower(sexo);

        while(sexo != hombre && sexo!=mujer){
            printf("\nError \nReingrese el sexo: (Solo f o m)");
            scanf("%c",&sexo);
            __fpurge(stdin);
            sexo=tolower(sexo);
        }

        if (sexo == hombre){
            cantHombres=cantHombres+1;
        }

        printf("\nIngrese eñ legajo: ");
        scanf("%d",&legajo);
        __fpurge(stdin);

        printf("\n\nEdad: %d Sexo: %c \nCon Legajo: %d\n\n",edad,sexo,legajo);

        if(edad > hombreMasViejo && sexo==hombre){
            legajoMasViejo=legajo;
        }
        if(edad < mujerMasJoven && sexo==mujer){
            legajoMasJoven=legajo;
        }
    }

    edadPromedio= edadAcumulador/5,0;

    printf("\n\nLa edad promedio es: %.2f",edadPromedio);
    printf("\nLa edad maxima es: %d",edadMaxima);
    printf("\nLa edad minima es: %d",edadMinima);
    printf("\nLa cantidad de hombres es: %d",cantHombres);
    printf("\nEl legajo del hombre mas viejo: %d",legajoMasViejo);
    printf("\nEl legajo de la mujer mas joven: %d",legajoMasJoven);

    return 0;
}
