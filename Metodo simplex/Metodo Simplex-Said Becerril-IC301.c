#include "metodosimplex.h"

void imprimir_tabla_simplex_uno(float funcion[LIM],float restriccion[LIM][LIM],float constante[LIM],int v,int r){
	int i,n;
	printf("\n\t\t\tTabla simplex #1\n");
	for(i=0; i<r; i++){
		for(n=0; n<v; n++){
			printf("%.3f\t",restriccion[i][n]);
		}
		printf("%.3f\n",constante[i]);
	}
	for(n=0; n<v; n++){
		printf("%.f\t",funcion[n]*(-1));
	}
}

int buscar_menor_z(float funcion[LIM],int menor,int aux,int v){
	int n;
	menor=funcion[0];
	for (n=0; n<v; n++){
	    if (funcion[n] > menor){
	    	menor=funcion[n];
	   		aux=n;
	    }
	}
	return (menor)*-1;
}

void columna_pivote(float restriccion[LIM][LIM], int r, int aux){
	int i;
	printf("\nLa columna pivote\t\t");
	printf("\n");
	for(i=0; i<r; i++){
		printf("%.3f\t\n",restriccion[i][aux]);
		}
}

float menor_columna_pivote(float constante[LIM],float c2[LIM],int r,int v,float rcons[LIM],float restriccion[LIM][LIM],int aux,int aux2){
	float menor2=0;
	int  i;
	printf("\nMenor para la fila pivote\n");
	for(i=0; i<r; i++){
	rcons[i]=constante[i]/restriccion[i][aux];
	printf("%.3f\t",rcons[i]);
	}
	aux2=0;
	menor2=rcons[0];
	for (i=0; i<v; i++){
    	if (menor2 > rcons[i]){
   			 menor2=rcons[i];
   			 aux2=i;
   		 }
	}
	printf("\nel menor es:%.3f pos:%d\n",menor2,aux2);
	printf("elemento pivote:%.3f\n",restriccion[aux2][aux]);
	return aux2;
}
void nueva_tabla_simplex(int n,int v,float restriccion[LIM][LIM],float menor,float aux,float aux2,float nfila[LIM],float nfila2[LIM][LIM]){

}
