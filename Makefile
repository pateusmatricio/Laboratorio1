PROG = ./bin/lab1

CC = g++

CPPFLAGS = -Wall -ansi -pedantic -O0 -g -std=c++11

OBJS = ./build/main.o ./build/data.o ./build/gerenciador.o ./build/funcionario.o ./build/empresa.o

PROG: $(PROG)

$(PROG): CPPFLAGS += -I. -I./include/

$(PROG): $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

./build/main.o: ./src/main.cpp
	$(CC) -c $^ $(CPPFLAGS) -o $@

./build/data.o: ./src/data.cpp
	$(CC) -c $^ $(CPPFLAGS) -o $@

./build/gerenciador.o: ./src/gerenciador.cpp
	$(CC) -c $^ $(CPPFLAGS) -o $@

./build/funcionario.o: ./src/funcionario.cpp
	$(CC) -c $^ $(CPPFLAGS) -o $@

./build/empresa.o: ./src/empresa.cpp
	$(CC) -c $^ $(CPPFLAGS) -o $@

clean:
	rm -f core $(PROG) $(OBJS)

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test