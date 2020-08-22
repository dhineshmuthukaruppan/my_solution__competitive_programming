// #include <iostream>
// #include <vector>

// using namespace std;   



// int main(){



//     return 0;   

// }  /* end of main() */



// problem 1 - distance and axis
// ==========

#include <iostream>
#include <vector>

using namespace std;   



int main(){


    int t, n, k;       
    cin >> t;  

    for(int i=0; i<t; i++){
        cin >> n >> k;    

        // k ==0 and n is even ->  no need for any steps
        if(k == 0 && n % 2 == 0){
            cout << 0 << '\n';   
        }else if(k == 0 && n % 2 == 1){    
            // n is odd number and k == 0
            cout << 1 << '\n';    
        }else if(k >= n){
            cout << k-n << '\n';   
        }else if(k < n && n % 2 == 0){
            cout  << 0 << '\n';   
        }else if(k < n && n % 2 == 1){
            cout << 1 << '\n';
        }   

    }  /* end of for i loop  */



    return 0;   

}  /* end of main() */




// // problem 3


// #include <iostream>
// #include <vector>

// using namespace std;   


// int gcd(int a, int b) 
// { 
//     if (a == 0) 
//         return b; 
//     return gcd(b % a, a); 
// } 

// int findMin(){


// }  /* end of findMin() */

// bool nonDecreasing(int a[], int n){

//     for(int i=0; i<n-1; i++){
//         if(a[i] > a[i+1]){
//             return false;     
//         }
//     }

//     return true;    

// }


// int main(){

//     int t, n;    

//     cin >> t; 
//     for(int i=0; i<t; i++){
//         cin >> n; 
//         int a[n];   
//         for(int j=0; j<n; j++){
//             cin >> a[j];
//         }

//         bool nondecreasing = nonDecreasing(a, n);         

//         if(nondecreasing){
//             cout << "YES";   
//         }else{

//         }
        
//     }


//     return 0;   

// }  /* end of main() */