#include <iostream>
#include <vector>


using namespace std;    

// Time - O(n) Space O(n)
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

// Time - O(n) Space O(1)
int nthFibonacciOptimized(int n){

    int Track[2] {0, 1};   

    int counter = 3;    

    while(counter <= n){   
        int fibSum = Track[0] + Track[1];
        Track[0] = Track[1];   
        Track[1] = fibSum;    
        counter++;   
    }

    if(n < 1){
        return -1;   
    }else if(n <=2){
        return Track[n];
    }else{
        return Track[1];
    }
        
}  /* end of nthFibonacciOptimized */


int main(){

    // Time - O(n) Space O(n)
    vector<int> memoize(11, -1);  // size of 11 and initialize everything to -1
    cout << nthFibonacci(10, memoize) << '\n';         

    // Time - O(n) Space O(1)
    cout << nthFibonacciOptimized(10);     




    return 0;   

}  /* end of main() */