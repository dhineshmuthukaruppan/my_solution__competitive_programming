#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;    


void print(const vector<vector<int>> &A){
    
    for(int i=0; i<A.size(); i++){
        for(int j=0; j < A[i].size(); j++){
            cout << A[i][j] << ' '; 
        }
        cout << '\n';    
    }

}


int main(){


    

    return 0;   

}  /* end of main() */
