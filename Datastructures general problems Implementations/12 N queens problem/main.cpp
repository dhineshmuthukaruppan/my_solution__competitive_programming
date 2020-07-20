#include <iostream>
#include <vector>
#include <stack>

using namespace std;   

class Position{
    public:
        int row; 
        int col; 

};

int getSize(){
    int boardSize;  

    cout << "You can select the board size 4*4 to 8*8. Please enter it ";
    cin >> boardSize; 
    while(boardSize<4 || boardSize>8){
        cout << "\n board size must be greater than 3 and less than 9. Please enter it. ";  
        cin >> boardSize; 
    }
    return boardSize;     
}   


bool isGuarded(vector<vector<int>> &board, int chkrow, int chkcol ){

    int row; 
    int col;    

    cout << "checking row " << chkrow << " checking column " << chkcol << '\n';

    /* check current column for queen */
    col = chkcol;    
    for(row=0; row<=chkrow; row++){
        if(board[row][col] == 1){
            return true; 
        }
    }


    /* check diagonal right up  */
    for(row = chkrow-1, col = chkcol+1; row >= 0 && col<=board.size()-1; row--, col++){
        if(board[row][col] == 1){
            return true; 
        }
    }


    /* check diagonal left up  */
    for(row = chkrow-1, col = chkcol-1; row>=0 && col>=0; row--, col--){
        
        cout << "checking diagonal " << row << " - " << col << '\n';
        if(board[row][col] == 1){
            return true; 
        }
    }


    return false; 

}  /* end of isGuarded() */



void fillBoard(stack<Position> &stk, int boardSize){

    vector<vector<int>> board(boardSize, vector<int>(boardSize, 0)); 

    // for(int i=0; i<board.size(); i++){
    //     for(int j=0; j<board[i].size(); j++){
    //         cout << board[i][j] << ' '; 
    //     }
    //     cout << '\n';   
    // }      

    int row; 
    int col; 

    row = 0;
    col = 0; 

    while(col<=boardSize-1 && row<=boardSize - 1 ){   

        if(!isGuarded(board, row, col)){
            board[row][col] = 1; 
            Position pos;      
            pos.row = row;  
            pos.col = col; 

            stk.push(pos);    
            cout << "pushed on the stack " << pos.row << " - " << pos.col << '\n';  

            row++; 
            col = -1;   
        }

        while(col >= boardSize - 1){
            Position pos = stk.top(); 
            stk.pop(); 
            cout << "popped from the stack " << pos.row << pos.col << '\n';
            row = pos.row; 
            col = pos.col; 
            board[row][col] = 0; 
        }
        
        col++;
        if(col > boardSize-1){
            col = boardSize - 1; 
        }
    }

}  /* end of fillBoard() */


void printBoard(stack<Position> &stk, int boardSize){

    stack<Position> reverseStack;

    while(!stk.empty()){
        Position pos = stk.top(); 
        stk.pop(); 
        reverseStack.push(pos);
    }

    while(!reverseStack.empty()){
        Position pos = reverseStack.top(); 
        reverseStack.pop();        
        int col = pos.col; 
        for(int i=0; i<boardSize; i++){
            if(i == col){
                cout << "Q | ";  
            }else{
                cout << "  | ";
            }     
        }
        cout << '\n';     
    }


}  /* end of printBoard() */


int main(){

    stack<Position> stk;    

    int boardSize = getSize();    

    fillBoard(stk, boardSize); 

    printBoard(stk, boardSize);     

    return 0;  

}  /* end of main() */

