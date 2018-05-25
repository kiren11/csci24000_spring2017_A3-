game: Player.h Player.cpp Game.cpp
	g++ -o game Player.cpp Game.cpp

clean:
	rm game
