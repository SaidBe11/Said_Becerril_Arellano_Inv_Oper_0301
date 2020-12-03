/**
 * @file ruta.h
 * @author Said Becerril Arellano
 * @date 03-11-2020
 * @brief Funciones
*/

#ifndef ruta_h
#define ruta_h
#define max 100
#include <stdio.h>
//Funciones principales
/**
 * @brief init Inicia la ejecucion de la matriz bidimensional.
 * @param aristas es el numero de aristas que contendra el grafo.
 * @param array Es el arreglo bidimensional que se encargara de guardar lso datos.
 * @return void
*/
void init(int aristas,int array[max][max]);
/**
 * @brief llenado aqui se solicita las adyacencias a utilizar. 
 * @param aristas los aristas solictiara el numero de adyacencias.
 * @param array se llena las adyacencias con los datos solicitados.
 * @return void
 */
void llenado(int aristas,int array[max][max]);
/**
 * @brief findStreet lider del programa, se encarga de revisar si existe una ruta o un camino.
 * @param aristas numero de recorridos que debe dar.
 * @param inicio es el puntro inicial para el usuario.
 * @param fin es el punto final para el usuario
 * @param array utiliza para comparar los datos guardados por inicio y fin.
 * @param aux2 Se iguala al numero de aristas para salir de ciclo do-while. 
 * @param aux se utiliza para guardar el valor encontrado y revisarlos con lo datos anteriores guardados.
 * @return Regresa el numero final en el recorrido de los caminos.
*/

int findStreet(int aristas,int inicio,int fin,int array[max][max],int aux2,int aux);
/**
 * @brief Impresion imprime la matriz de adyasencia del grafo a ocupar.
 * @param aristas 
 * @param array
 * @return void
*/
void impresion(int aristas,int array[max][max]);
/**
 * @brief Compara los resultados obtenidos, si son iguales o similares existe un camino.
 * @param fin
 * @param finall
*/
void existencia(int fin,int finall);

#endif
