.ONESHELL:
default:
	cd build;
	g++ -Wall -c ../*.cpp ../src/*.cpp -I ../ 
	g++ *.o -o test.exe -L ../lib/ -lraylib  -lm -pthread -ldl

run:
	./build/test.exe

buildAndRun:
	cd build;
	g++ -Wall -c ../*.cpp ../src/*.cpp -I ../ 
	g++ *.o -o test.exe -L ../lib/ -lraylib  -lm -pthread -ldl
	./test.exe