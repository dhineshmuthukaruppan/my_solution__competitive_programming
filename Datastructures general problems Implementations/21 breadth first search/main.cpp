#include <iostream>
#include <queue>    

using namespace std;   


void bfs(int vtx, int A[][8], int n ){

    int visited[8] {0};   
    queue<int> q;    

    // process the vertex
    cout << vtx << ' ';   
    
    // set the visited flag to 1
    visited[vtx] = 1;    

    // insert the visited element to q
    q.push(vtx);   


    while(!q.empty()){

        int u = q.front();    
        q.pop();    

        for(int v=1; v<=n; v++){
            if(A[u][v] == 1 && visited[v] == 0){
                // process the vertex
                cout << v << ' ';   

                // set the visited flag to 1
                visited[v] = 1;    

                q.push(v);     
            }
        }

    }  /* end of while(!q.empty()) */

}  /* end of bfs() */




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

    cout << "BFS starting with vertex 1 \n";   
    bfs(1, A, 8);

    cout << "\nBFS starting with vertex 4 \n";   
    bfs(4, A, 8);


    return 0;         

}  /* end of main() */