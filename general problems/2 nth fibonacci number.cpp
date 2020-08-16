#include <iostream>
#include <vector>


using namespace std;    


int nthFibonacci(int n, vector<int> &memoize){

    if(n == 1){
        return 0; 
    }else if(n == 2){
        return 1;    
    }else{
        if(memoize[n] == -1){
            memoize[n] = nthFibonacci(n - 1, memoize) + nthFibonacci(n - 2, memoize);     
            return memoize[n];       
        }else{
            return memoize[n];    
        }
    }

} /* end of nthFibonacci() */



int main(){

    // Time - O(n) Space O(n)
    vector<int> memoize(11, -1);  // size of 11 and initialize everything to -1
    cout << nthFibonacci(10, memoize);         


    



    return 0;   

}  /* end of main() */