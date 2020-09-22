#include <iostream>
#include <vector>

using namespace std;   


int main(){

    vector<int> A {9, 9, 9};          

    bool extraone = false;         
    bool carryone = true;        
    
    for(int i=A.size()-1; i>=0; i--){

        if(i == 0 && A[i] == 9 && carryone == true){
            extraone = true;   
            A[i] = 0;   
        }else if(A[i] < 9 && carryone == true){
            A[i] += 1;    
            break;    
        }else if(A[i] == 9 && carryone == true){
            A[i] = 0;   
            continue;               
        }

    }  /* end of for i loop */


    vector<int> result;    
    bool precedingZerosOmitted = false;    
    if(extraone){
        result.push_back(1);    
        precedingZerosOmitted = true;     
    }
    for(int i=0; i<A.size(); i++){

        if(A[i] == 0 && precedingZerosOmitted == false){
            continue;    
        }else{
            precedingZerosOmitted = true;     
            result.push_back(A[i]);     
        }

    }


    for(int i=0; i<result.size(); i++){
        cout << result[i] << ' ';    
    }


    return 0;   

}  /* end of main() */