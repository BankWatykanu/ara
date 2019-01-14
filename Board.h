#include <stdio.h>
#include "Board.cpp"

int m = 17;       	//ilosc kolumn
int n = 32;			//ilosc wierszy

class Board{
public:
	int x;
	int y;
	char name;

	void move(int ax, int ay);
	/*~Board(){
 		printf("Umarlem\n");
	}*/
};
class Empty: public Board{
public:
	//name = "E";
	Empty(){
		this->name = 'E';
	}
};

class noExist: public Board{
public:
	
	noExist(){
		this->name = ' ';
	}
};

class Figure : public Board{
public:
	
	bool owner;
	char name;
	Figure(){	
		this->name = 'F';
	};
	~Figure();


};
/*==============================*/
class Ghost: public Figure{
public:
	//name = "G";
	Ghost(int a, int b/*, bool player*/){
		this->x = a;
		this->y = b;
		this->name = 'G';
		//this->owner = player
	};
	void move(int ax, int ay){
		this->x = ax;
		this->y = ay;
	};
};

