FLAGS = -g -std=c++1z -Wall -Wextra -pedantic -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wrestrict -Wuseless-cast -Wformat=2
VFLAGS = --track-origins=yes --leak-check=full --show-leak-kinds=all
BIN = map

all: main

main: main.cpp map.hpp
	g++ main.cpp -o $(BIN) $(FLAGS)

.phony:clean
clean:
	rm -rf $(BIN)

test: clean
	make
	./$(BIN)

val: clean
	make
	valgrind $(VFLAGS) ./$(BIN)