#include <iostream>
#include <vector>
#include <math.h>

using namespace std; 

// for checking whether single integer is prime or not, the following method 
// takes O(n)
bool isPrime(int number){

    bool condition = true;  
    
    if(number <= 1){
        condition = false; 
    }else{
        for(int i=2; i<number; i++){
            if(number % i == 0){
                condition = false; 
                break;  
            }else{
                continue; 
            }
        }
    }

    return condition;    
}

// O(sqrt(n));  
bool isPrimeEfficient(int number){

    bool condition = true;   

    if(number <= 1){
        condition = false; 
    }else if(number == 2 || number == 3){
        condition = true; 
    }else{

        for(int i=2; i<= sqrt(number); i++){
            if(number % i == 0){
                condition = false; 
                break; 
            }else{
                continue; 
            }
        }
    }

    return condition;    
}



/* interviewbit variation 

// Return 1 if A is prime, else 0
int Solution::isPrime(int A) {
    
    if(A <= 1){
        return 0;   
    }else if(A==2){
        return 1;    
    }else {
        int upperLimit = (int)(sqrt(A));
        for (int i = 2; i <= upperLimit; i++) {
            if (A % i == 0) return 0;
        }
        return 1;
        
    }
    

}

*/




int main(){

    cout << boolalpha;    

    vector<int> vec;    

    // for(int i=2; i<10; i++){
    //     if(isPrime(i)){
    //         vec.push_back(i);    
    //     }    
    // }

    // vector<int>::iterator it; 
    // it = vec.begin();   
    // while(it!=vec.end()){
    //     cout << *it << '\n'; 
    //     it++;    
    // }

    for(int i=2; i<10000; i++){
        if(isPrimeEfficient(i)){
            vec.push_back(i);    
        }    
    }


    vector<int>::iterator it; 
    it = vec.begin();   
    while(it!=vec.end()){
        cout << *it << '\n'; 
        it++;    
    }

    cout << vec.size() << '\n'; 

    return 0;       
}