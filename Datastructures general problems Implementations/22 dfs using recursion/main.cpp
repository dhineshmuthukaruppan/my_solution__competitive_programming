#include <iostream>

using namespace std;    


void DFS(int vtx, int A[][8], int n){

    static int visited[8] {0};   

    // process the vertex
    cout << vtx << ' '; 

    visited[vtx] = 1;   

    for(int v=1; v<=n; v++){

        if(A[vtx][v] == 1 && visited[v] == 0){
            DFS(v, A, 8); 
        }

    }  /* end of for loop */

}  /* end of DFS() */



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

    cout << "\nDFS starting with vertex 4 \n";   
    DFS(4, A, 8);



    return 0;  

}