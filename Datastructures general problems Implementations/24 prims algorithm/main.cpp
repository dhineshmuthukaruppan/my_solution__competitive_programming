#include <iostream>

#define V 8
#define I 32767

using namespace std;    

void PrimsMST(int G[][V], int n){

    // I need datastructure for storing 
    int R[2][n-1] {0};    

    // Datastructure for tracking whether the vertes is added or not, and to calculate the next edge
    int Track[V];    


    // step 1 - find the first minimum edge by checking the upper triangular matrix and update the Track[] accordingly
    // after the minimum element is found, then update the R[][] and T[] accordingly
    int min {I}, u, v;

    for(int i=0; i<=n; i++){
        for(int j=i; i<=n; j++){   

            if(G[i][j] < min){
                min = G[i][j];   
                u = i; 
                v = j;    
            }

        }
    }  /* end of for int i loop */


    R[0][0] = u;    
    R[1][0] = v;    

    // make it 0, to denote it's included
    Track[u] = Track[v] = 0;   

    // initialize the track record to track min cost edges
    for(int i=1; i<=n; i++){
        if(Track[i] != 0){
            if(G[i][u] < G[i][v]){
                Track[i] = u;   
            }else{
                Track[i] = v;      
            }
        }
    }


    // repeating procedure to fill all the R[][] array
    for(int i=1; i<n-1; i++){

        // repeat
        // find out which Track pair is minimum 
        // push it on to the R[][] array

        min = I;    

        for(int j=1; j<=n; j++){
            if(Track[j] != 0){
                if(G[i][Track[j]] < min){
                    min = G[j][Track[j]];    
                    u = j; 
                    v = Track[j];   
                }
            }
        }


        R[0][i] = u;    
        R[1][i] = v;   

        Track[i] = 0;    

        // update track array to track min cost edge

    }

}  /* end of PrimsMST() */






int main(){

    int cost [V][V] {
            {I, I, I, I, I, I, I, I},
            {I, I, 25, I, I, I, 5, I},
            {I, 25, I, 12, I, I, I, 10},
            {I, I, 12, I, 8, I, I, I},
            {I, I, I, 8, I, 16, I, 14},
            {I, I, I, I, 16, I, 20, 18},
            {I, 5, I, I, I, 20, I, I},
            {I, I, 10, I, 14, 18, I, I},
    };


    int n = sizeof(cost[0])/sizeof(cost[0][0]) - 1;

    cout << n;    

    PrimsMST(cost, n);




    return 0;    

}  /* end of main() */