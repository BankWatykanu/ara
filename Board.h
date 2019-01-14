#include <stdio.h>
#include "Board.cpp"

int m = 10;
int n = 10;

class Board{
public:
	int x;
	int y;
	char name;


	/*~Board(){
 		printf("Umarlem\n");
	}*/
};
class Empty: public Board{
public:
	Empty(){
		printf("hello im empty\n");
	}
};

class Figure : public Board{
public:
	bool owner;
	char name;
	void death(){
		~Figure();
	};
};

class Ghost: public Figure{
public:
	name = "G";
	Ghost(int a, int b, /*bool player*/){
		this->x = a;
		this->y = b;
		//this->owner = player
	};
}