#include "grafica_H.h"
void graficar(int r1, int r2, int m, int b){
     int i=0, y;
          
    /*Se crea una archivo de tipo popen, es una tuber�a IPC que se usa, para
     * ejecutar gnuplot y enviarle el archivo a graficar
	 */
    FILE * ventanaGnuplot = popen ("gnuplot -persist", "w");
    
    /*lista de comandos para ejecutar y configurar la visualizaci�n que tendr�n
     * los puntos en la gr�fica con gnuplot*/
    /* hola esto es un cambio */


    
    fprintf (ventanaGnuplot,"set title \"funcion y=mx+b\"");
    fprintf (ventanaGnuplot,"\n set style data linespoints ");
    fprintf (ventanaGnuplot,"\n set xrange [%i:%i]",r1,r2);
    fprintf (ventanaGnuplot,"\n set ylabel \"------Y---->\"");
    fprintf (ventanaGnuplot,"\n set xlabel \"------X---->\"");
    fprintf (ventanaGnuplot,"\n set grid ytics ");
    fprintf (ventanaGnuplot,"\n set grid xtics ");
    fprintf (ventanaGnuplot,"\n plot '-'\n");
   
   //se envian los puntos a graficar de acuerdo al rango de la funcion
   for (i=0; i<r2; i++){	
 	y=(m*i)+(b);
 	fprintf (ventanaGnuplot,"%i \n ",y);
    }
    
    fclose(ventanaGnuplot);
	
}
