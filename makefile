run: Main.o Pieza.o Torre.o Caballo.o Alfil.o Reina.o Rey.o Peon.o 
	g++ Main.o Pieza.o Torre.o Caballo.o Alfil.o Reina.o Rey.o Peon.o -o run
Main.o: Main.cpp Pieza.h Torre.h Caballo.h Alfil.h Reina.h Rey.h Peon.h 
	g++ -c Main.cpp
Pieza.o: Pieza.h Pieza.cpp
	g++ -c Pieza.cpp
Torre.o: Torre.h Torre.cpp
	g++ -c Torre.cpp
Caballo.o: Caballo.h Caballo.cpp
	g++ -c Caballo.cpp
Alfil.o: Alfil.h Alfil.cpp
	g++ -c Alfil.cpp
Reina.o: Reina.h Reina.cpp
	g++ -c Reina.cpp
Rey.o: Rey.h Rey.cpp
	g++ -c Rey.cpp
Peon.o: Peon.h Peon.cpp
	g++ -c Peon.cpp
