#include "metodosimplex.h"

int main(){
float funcion[LIM],restriccion[LIM][LIM],constante[LIM],nfila[LIM],nfila2[LIM][LIM];
int i,n,v,r,menor=0,aux=1,aux2;
float c2[LIM],rconst[LIM];
	printf("-----------------------------------------------------------\n");
	printf("\t\t\tMetodo Simplex\n");
	printf("-----------------------------------------------------------\n");
	printf("Numero de variables: ");
	scanf("%d",&v);
	for(n=0; n<v; n++){
		printf("Variable x%d de Z: ", n+1);
		scanf("%f",&funcion[n]);
	}
	printf("\nNumero de restricciones: ");
	scanf("%d",&r);
	for(i=0; i<r; i++){
		printf("\n\t\t\tRestriccion #%d\n",i+1);
		printf("-----------------------------------------------------------\n");
		for(n=0; n<v; n++){
			printf("n%d: ",n+1);
			scanf("%f",&restriccion[i][n]);
		}
		printf("Constante: ");
		scanf("%f", &constante[i]);
	}
	imprimir_tabla_simplex_uno(funcion,restriccion,constante,v,r);
	buscar_menor_z( funcion, menor, aux, v);
	printf("\nEl menor es %d \t\n",buscar_menor_z( funcion, menor, aux, v));
	columna_pivote(restriccion,r,aux);
	menor_columna_pivote(constante,c2,r,v,rconst,restriccion,aux,aux2);
	nueva_tabla_simplex(n,v,restriccion,menor,aux,aux2,nfila,nfila2);
	return 0;
}
