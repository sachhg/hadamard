all: qubit.o main.o main

qubit.o: qubit.cpp qubit.h
	g++ qubit.cpp -c qubit.o

main.o: main.cpp qubit.h
	g++ main.cpp -c main.o

main: main.o qubit.o qubit.h
	g++ main.o qubit.o -o main

clean:
	rm main.o qubit.o main
