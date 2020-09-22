#include <iostream>
#include <vector>

using namespace std;    




int solve(vector<int> &A, int B) {

    int sum = 0;   
    for(int i=0; i<B; i++){
        sum += A[i];    
    }  /* end of for i loop */

    int ans = sum;    
    int j = B - 1;   
    int n = A.size();   

    for(int i=0; i<B; i++){
        ans = max(ans, sum - A[j] + A[n - i - 1]);
        sum = sum - A[j] + A[n - i - 1];  
        j--;   
    }

    return ans;    

}  /* end of solve() */




int main(){


    vector<int> A {5, -2, 3, 1, 2};   
    cout << solve(A, 3);     



    return 0;  

}  /* end of main() */