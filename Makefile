FLAGS = -g -std=c++1z -Wall -Wextra -pedantic -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wrestrict -Wuseless-cast -Wformat=2
VFLAGS = --track-origins=yes --leak-check=full --show-leak-kinds=all
CC = g++
TARGET = map

all: $(TARGET)

$(TARGET): main.cpp map.hpp
	$(CC) main.cpp -o $(TARGET) $(FLAGS)

.phony:clean
clean:
	rm -rf $(TARGET)

test: clean
	make
	./$(TARGET)

val: clean
	make
	valgrind $(VFLAGS) ./$(TARGET)