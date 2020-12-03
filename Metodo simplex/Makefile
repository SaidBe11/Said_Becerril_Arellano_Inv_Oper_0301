all:
	gcc -g -c -Wall Metodo.c -o Metodo.o
	gcc -g -c -Wall Metodo Simplex-Said Becerril-IC301.c -o Metodo Simplex-Said Becerril-IC301.o
	gcc -g -Wall Metodo.o Metodo Simplex-Said Becerril-IC301.o -o Simplex

clean:
	rm -r *.o
	#rm -r application