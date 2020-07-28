#include <iostream>

using namespace std;    


/* O(n^3) */
int mssAlgo1(int *a, int n){   
    
    int sum, max = -INT32_MAX; 
    for(int subarray_index = 0; subarray_index < n; subarray_index++){

        for(int subarray_size = subarray_index; subarray_size < n; subarray_size++){

            sum = 0;  
            for(int i = subarray_index; i<=subarray_size; i++){   
                sum = sum + a[i];   
                max = std::max(sum, max);     
            }

        }

    }

    return max; 

}  /* end of mssAlgo1 */


/* O(n^2) */
int mssAlgo2(int *a, int n){

    
    int sum, max = -INT32_MAX; 
    for(int subarray_index = 0; subarray_index < n; subarray_index++){

        sum = 0;  
        for(int subarray_size = subarray_index; subarray_size < n; subarray_size++){

            sum = sum + a[subarray_size];   
            max = std::max(sum, max);    

        }

    }

    return max; 

}  /* end of mssAlgo2 */

/* O(n) */
int mssAlgo3(int *a, int n){

    int best = a[0], sum = a[0];    

    for(int i = 1; i < n; i++){

        sum = sum + a[i];   
        if(sum < a[i]){
            sum = a[i];   
        }

        if(best < sum){
            best = sum;     
        }

    }

    return best;    

}  /* end of mssAlgo3() */


int main(){

    int a[] {-1, 2, 4, -3, 5, 2, -5, 2};    

    cout << "max subarray sum is from algo 1 of O(n^3): " << mssAlgo1(a, 8) << '\n';   

    cout << "max subarray sum is from algo 2 of O(n^2) is : " << mssAlgo2(a, 8) << '\n';   
    
    cout << "max subarray sum is from algo 3 of O(n) is : " << mssAlgo3(a, 8) << '\n';    

    return 0;   

}  /* end of main() */