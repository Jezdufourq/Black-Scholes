main: EuropeanOption.o MainEuropeanOption.o math_utils.o
	g++ EuropeanOption.o MainEuropeanOption.o math_utils.o -o main.o

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

EuropeanOption.o: EuropeanOption.cpp
	g++ -c EuropeanOption.cpp

MainEuropeanOption.o: MainEuropeanOption.cpp
	g++ -c MainEuropeanOption.cpp

clean:
	rm *.o main
