#include "grafica_H.h"

int main(){
    int op=0;
    do{
    	system("cls");
    printf ("\t Graficando ecuaciones lineales");
    printf ("\n  Ingrese el rango de la funcion ");
    printf ("\n Rango inicial:");
    scanf("%i",&r1);
    printf ("\n Rango final:");
    scanf ("%i",&r2);
    
    printf ("\n Dame el valor de m:");
    scanf ("%i",&m);
    printf ("\n Dame el valor de b:");
    scanf ("%i",&b);
    printf ("\n La funcion es: y=%ix+%i",m,b);
    printf (", con un rango de [%i:%i]",r1,r2);

    graficar(r1,r2,m,b);
    printf ("\n Desea realizar otra grafica lineal: Si=[1], No=[0]: ");
    scanf ("%i",&op);
	}
    while (op==1);
    return 0;
}

