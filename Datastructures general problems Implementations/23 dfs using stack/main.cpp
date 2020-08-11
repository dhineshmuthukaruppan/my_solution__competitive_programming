#include <iostream>
#include <stack>


using namespace std;   


void printStack(stack<int> stk){

    cout << "\nstack on current stage\n";   
    while(!stk.empty()){
        cout << stk.top() << ' ';
        stk.pop();      
    }

}  /* end of printStack() */


void DFS(int u, int A[][8], int n){

    stack<int> stk; 

    int visited[8] {0};

    cout << u << ' '; 
    visited[u] = 1;    

    stk.push(u);      


    int v = 0;   

    while(!stk.empty()){

        while(v < n){

            if(A[u][v] == 1 && visited[v] == 0){

                u = v;   

                visited[u] = 1;    
                
                stk.push(u);    

                cout << u << ' ';    

                v = 0;    

            }

            v++;   

        }

        v = 0;   // v = u is better
        u = stk.top();
        stk.pop(); 

    }  /* end of while loop */

}  /* end of DFS() */



void DFS_simple(int vtx, int A[][8], int n){

    int visited[8] {0};   
    stack<int> stk;    
    int u, v;    

    stk.push(vtx);        

    while(!stk.empty()){

        // printStack(stk);     

        u = stk.top(); 
        stk.pop();    

        if(visited[u] != 1){
            cout << u << ' ';   
            visited[u] = 1;    

            for(v=1; v<=n; v++){
                if(A[u][v] == 1 && visited[v] == 0){
                    stk.push(v);     
                }

            }

        }

    } /* end of while() */

}  /* end of DFS_simple() */






int main(){


        // representation using adjacency matrix
    int A[8][8] = {
                {0, 0, 0, 0, 0, 0, 0, 0},
                {0, 0, 1, 1, 1, 0, 0, 0},
                {0, 1, 0, 1, 0, 0, 0, 0},
                {0, 1, 1, 0, 1, 1, 0, 0},
                {0, 1, 0, 1, 0, 1, 0, 0},
                {0, 0, 0, 1, 1, 0, 1, 1},
                {0, 0, 0, 0, 0, 1, 0, 0},
                {0, 0, 0, 0, 0, 1, 0, 0}};

    // cout << "DFS starting with vertex 1 \n";   
    // DFS(1, A, 8);

    cout << "\nDFS starting with vertex 1 \n";   
    DFS_simple(1, A, 8);
    cout << '\n';    


    cout << "\nDFS starting with vertex 4 \n";   
    DFS(4, A, 8);
    cout << '\n';         



    return 0;  

}  /* end of main() */