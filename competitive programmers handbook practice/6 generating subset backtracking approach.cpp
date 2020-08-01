#include <iostream>
#include <vector>


using namespace std;   


vector<int> subset;   

/* O(2 ^ n) */
void generateSubsetRecursionStackApproach(int k, int n){

    if(k == n){
        // process subset

        for(int i=0; i<subset.size(); i++){
            cout << subset[i] << ", "; 
        }
        cout << '\n';    

    }else{
        generateSubsetRecursionStackApproach(k + 1, n);   
        subset.push_back(k);   
        generateSubsetRecursionStackApproach(k + 1, n);   
        subset.pop_back();      

    }

}  /* end of generateSubsetRecursionStackApproach */



int main(){

    generateSubsetRecursionStackApproach(0, 3);        

    return 0; 

}
