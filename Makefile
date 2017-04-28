Main: Main.o Archivo.o
	g++ Main.o Archivo.o -o Main
Main.o: Main.cpp Archivo.h
	g++ -c Main.cpp
Archivo.o: Archivo.h Archivo.cpp
	g++ -c Archivo.cpp
Clean:
	rm -f *.o temp
