all: listAll

listAll: listAll.cpp
	g++ -o listAll listAll.cpp -std=c++11

clean:
	rm listAll