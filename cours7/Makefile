main: *.o
	g++ *.o -o main

*.o : *.cpp *.hpp
	g++ -c *.cpp

clean:
	rm -f *.o main