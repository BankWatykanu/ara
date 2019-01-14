
#include "Board.h"
int rx, ry;
int main(){
	Board *board[m][n];                                          //dwuwymiarowa tablica obiektow
    for(int i = 0; i < m; i++){
    	for (int j = 0; j < n; j++) {
        if(i%2 == 0 && j%2 == 0)      board[i][j] = new Empty;
        else if(i%2 != 0 && j%2 != 0) board[i][j] = new Empty;
        else                          board[i][j] = new noExist;
      }
    }
    
    /*===============[PRINT]===============*/

      for(int i = 0; i < m; i++){
          for (int j = 0; j < n; j++) {
            printf("%c",board[i][j]->name);   
          }
          printf("\n");
        }
    
    /*====================================*/

    scanf("%d",&rx);
    //printf("blablabla\n");
    scanf("%d",&ry);
    delete board[0][0];
    board[0][0] = new Ghost(rx, ry);


    printf("wypisyje %c\n", board[rx][ry]->name);
    /*int tab[2];
    tab[0] = rx;
    tab[1] = ry;
    scanf("%d",&rx);
    scanf("%d",&ry);*/
    //board[tab[0]][tab[1]]->move(rx, ry);

    /*===============[PRINT]===============*/
    
      for(int i = 0; i < m; i++){
          for (int j = 0; j < n; j++) {
            printf("%c",board[i][j]->name);   
          }
          printf("\n");
        }
    
    /*====================================*/


  	//*board[0][0] = Empty();
  	//*board[0][1] = *board[0][0];
  	//*board[1][0] = Figure();
  	//*board[0][0] = Empty();
    for(int i = 0; i < m; i++){
    	for (int j = 0; j < n; j++)	delete board[i][j];
    }
    
	return 0;

}
