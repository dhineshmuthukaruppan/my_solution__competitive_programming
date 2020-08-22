/* Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons. */


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;    


int main(){

    vector<int> A {-2, 1, -4, 5, 3};    
    sort(A.begin(), A.end());    

    int ans = A[0] + A[A.size() - 1];      


    return 0;   

}  /* end of main() */

