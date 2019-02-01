struct ruch{
        int x;
        int y;
        int tx;
        int ty;
};


int Wartosc(std::string a){

    if(a=="pawn")return 1;
    else if(a=="tower")return 7;
    else if(a=="ghost")return 5;
    else if(a=="cav")return 4;
    else if(a=="charge")return 3;
    else if(a=="mystery")return 10;
    else if(a=="king")return 100;
    else std::cout<<"cos poszlo bardzo zle z zliczaniem figur!!!!!!";



}

int zliczWartosciP(Pole *wsk_to_board){

    Pole board[17*34+34];

    for(int i = 0; i < 17; i ++)
    {
        for(int j = 0; j < 34; j ++)
        {
            if((i%2==0&&j%2==0)||i%2==1&&j%2==1)
            board[i*34+j] = wsk_to_board[i * 34 + j];
        }
    }

    int pW=0;
    for(int k = 0; k < 17; k++){
        for (int l = 0; l< 34; l++){
            if(((k%2==0&&l%2==0)||k%2==1&&l%2==1)&&board[k*34+l].name!="notexist"){
                    if(board[k*34+l].owner==2) pW+=Wartosc(board[k*34+l].name);
            }
        }
    }
    return pW;
}
int zliczWartosciAI(Pole *wsk_to_board){
    Pole board[17*34+34];

    for(int i = 0; i < 17; i ++)
    {
        for(int j = 0; j < 34; j ++)
        {
            if((i%2==0&&j%2==0)||i%2==1&&j%2==1)
            board[i*34+j] = wsk_to_board[i * 34 + j];
        }
    }

    int aiW=0;
    for(int k = 0; k < 17; k++){
        for (int l = 0; l< 34; l++){
            if(((k%2==0&&l%2==0)||k%2==1&&l%2==1)&&front_fields[k*34+l].name!="notexist"){
                    if(front_fields[k*34+l].owner==1) aiW+=Wartosc(front_fields[k*34+l].name);
            }
        }
    }
    return aiW;
}

void wroc(Pole *wsk_to_board){
    for(int i = 0; i < 17; i ++)
    {
        for(int j = 0; j < 34; j ++)
        {
            if((i%2==0&&j%2==0)||i%2==1&&j%2==1)
            front_fields[i*34+j] = wsk_to_board[i * 34 + j];
        }
    }
}
#include "znajdzRuchP.h"
#include "znajdzRuchAI.h"





int AI(Pole *wsk_to_board){

    Pole board[17*34+34];

    for(int i = 0; i < 17; i ++)
    {
        for(int j = 0; j < 34; j ++)
        {
            if((i%2==0&&j%2==0)||i%2==1&&j%2==1)
            board[i*34+j] = wsk_to_board[i * 34 + j];
        }
    }

    std::cout<<"teraz ruszam sie ja!!!\n";
    ruch bestRuch=znajdzRuchAI(front_fields);

    aiFX=bestRuch.x;
    aiFY=bestRuch.y;
    aiTX=bestRuch.tx;
    aiTY=bestRuch.ty;
}

