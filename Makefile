all:
	make game

game: game.o 
	g++ game.o ai.o board.o player.o -o game

game.o: game.cpp ai.o board.o player.o
	g++ -c game.cpp
ai.o: ai.cpp ai.hpp
	g++ -c ai.cpp -Wall -Werror -ansi -pedantic

board.o: board.cpp board.hpp
	g++ -c board.cpp -Wall -Werror -ansi -pedantic

player.o: player.cpp player.hpp
	g++ -c player.cpp -Wall -Werror -ansi -pedantic

clean:
	rm -f *.o game *~
