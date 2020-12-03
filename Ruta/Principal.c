/**
 * @file principal.c
 * @author Said Becerril Arellano
 * @date 03-11-2020
 * @brief Funcion principal
*/
#include "ruta.h"

int main(int argc, char const *argv[]){
    int array[max][max];
    int inicio=0,fin=0,aristas=0,aux=0,aux2=0,finall=0,op=0;
    do{
    printf("Existencia_de_caminos\t\n");
    printf("Numero de aristas:\n");
    scanf("%d",&aristas);
    init(aristas,array);
    llenado(aristas,array);
    fflush(stdin);
    impresion(aristas,array);
    do{
    printf("coordenadas\t\n");
    printf("Inicio:");
    scanf("%d",&inicio);
    printf("Destino:");
    scanf("%d",&fin);
    finall=findStreet(aristas,inicio,fin,array,aux2,aux);
    existencia(fin,finall);
    printf("\n �Queire realizar otro recorrido?, si=1 ,no=0:\t\n");
    scanf("%d",&op);
    fflush(stdin);
    } while (op==1);
    printf("\n �Quiere realizar otro grafo?, si=1 ,no=0:\t\n");
    scanf("%d",&op);
    fflush(stdin);
    } while (op==1);
    return 0;
}
