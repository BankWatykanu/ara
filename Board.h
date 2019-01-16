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
	Board() {this->name ='b';};
	virtual ~Board(){
		//printf("wybuchl obiek Board\n");
	};
	void hello(){
		printf("Hej I'm %c\n",name );
	};
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
		this->x = 15;
		printf("Stworzylem figure\n");
	};
	//~Figure();


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

