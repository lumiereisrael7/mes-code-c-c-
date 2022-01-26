main: *.o
	g++ build/*.o -o main

*.o:*.cpp *.hpp
	mkdir build
	g++ -c *.cpp
	mv *.o build

clean: build/
	rm -rf build/ main