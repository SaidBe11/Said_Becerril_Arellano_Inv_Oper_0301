#ifndef __METODOSIMPLEX_H
#define __METODOSIMPLEX_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 10
#define LIM 5

void imprimir_tabla_simplex_uno(float funcion[LIM],float restriccion[LIM][LIM],float constante[LIM],int v,int r);
int buscar_menor_z(float funcion[LIM],int menor,int aux,int v);
void columna_pivote(float restriccion[LIM][LIM], int r,int aux);
float menor_columna_pivote(float constante[LIM],float c2[LIM],int r,int v,float rcons[LIM],float restriccion[LIM][LIM],int aux, int aux2);
void nueva_tabla_simplex(int n,int v,float restriccion[LIM][LIM],float menor,float aux,float aux2,float nfila[LIM],float nfila2[LIM][LIM]);

 /**
 * @brief imprimirtablasimplexuno Sierve para llamar la tabla simplex.
 * @param funcion Sirve para multiplicar menos 1.
 * @param restriccion El valor de la tabla.
 * @param constante Para el numero de columnas y filas.
 * @param b Termino independiente el cual se sumara a la multiplicacion.
 * @return void. 
*/

void imprimirtablasimplexuno(float funcion,float restriccion,float constante);

 /**
 * @brief buscamenor Sierve para encontrar el menor en la tabla simplex.
 * @param menor igualan al menor a la funcion[0].
 * @param funcion funcion tiene que ser menor.
 * @param aux auxiliar es igual al valor de funcion[n].
 * @param v tiene que ser que n numeros de nuesta tabla simples.
 * @return void. 
*/

void buscarmenor(float,int,int,int);

 /**
 * @brief columapivote Sirve para encontrar nuestra columna pivote.
 * @param restriccion es para revisar la fila privote.
 * @param r Para encontra el menor de i.
 * @param aux con este se encuentra la columna.
 * @return void. 
*/
void columapivote(float,int,int);

#endif


