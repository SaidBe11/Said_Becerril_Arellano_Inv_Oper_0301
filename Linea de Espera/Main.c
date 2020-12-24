/**
*@file Main.c 
*@brief Fichero principal del caso practico linea de espera
*@par   logica del MainLE
*       - Pedir rango de inicio y final 
*       - Pedir datos de caja y cantidad de clientes 
*       - Lamar funciones ColaDeEspera e InOut 
*@return 0
*/
#include "head_queue.h"

int main() {
	int op=1;
    do{
    	system("cls");
	printf ("\t Gestion de colas de espera \n");
	printf ("\n Ingrese rango de horas :");
	printf ("\n Hora de inicio:");
	scanf ("%i",&ini);
	printf ("\n Hora final:");
	scanf("%i",&fin);
	printf ("\n Ingrese la capacidad de caja:");
	scanf ("%i",&cap);
	printf ("\n Ingrese el numero de llegada de clientes:");
	for (j=ini; j<=fin; j++){
		printf("\n Cantidad-->");
		scanf("%d",&lg[j]);
		fflush(stdin);
	}
	printf ("\n Ingrese el numero de cajas abiertas: ");
	for (i=ini; i<=fin; i++){
		printf ("\n Cajas--> ");
		scanf ("%i",&caja[i]);
	}
	system("cls");
    ColaDeEspera(lg,ini,fin,caja,cap);
    
    InOut(lg,ini,fin,caja,cap);
    printf ("\n ¿Desea repetir el programa? Si=[1], No=[0]: ");
    scanf ("%i",&op);
	}
	while (op==1);


    
	return 0;
}
