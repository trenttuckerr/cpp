Lab10: Building.o Car.o Bicycle.o Lab10.o
	g++ Building.o Car.o Bicycle.o Lab10.o -o Lab10

Building.o: Building.cpp Building.h
	g++ -c Building.cpp

Car.o: Car.cpp Car.h
	g++ -c Car.cpp

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -c Bicycle.cpp

Lab10.o: Lab10.cpp
	g++ -c Lab10.cpp

clean:
	rm *.o Lab10
