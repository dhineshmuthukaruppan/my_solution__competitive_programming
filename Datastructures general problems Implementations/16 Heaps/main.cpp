#include <iostream>
#include <vector>


using namespace std;    


void heapInsert(vector<int> &a, int p){    

    int temp, i = p;    

    temp = a[i];   

    while(i > 1 && temp > a[i/2]){
        a[i] = a[i/2];   
        i = i / 2;    
    }

    a[i] = temp;    

}  /* end of heapInsert() */


int heapDelete(vector<int> &a, int p){

    int temp, returnvalue = a[1];    

    a[1] = a[p];   
    a[p] = returnvalue;    

    int i = 1, j = i * 2; 

    while(j <= p-1){
        if(j < p - 1 && a[j+1] > a[j]){
            j = j + 1;    
        }

        if(a[i] < a[j]){
            temp = a[j];
            a[j] = a[i];  
            a[i] = temp;   

            i = j;   
            j = i * 2;    
        }else{
            break;  
        }
        
    }  /* end of while(j <= p-1) */

    return returnvalue; 

}  /* end of heapDelete() */




int main(){


    vector<int> a {0, 14, 15, 5, 20, 30, 8, 40};      

    for(int i=2; i<a.size(); i++){
        heapInsert(a, i);       
    }      


    for(int i=a.size()-1; i>0; i--){
        heapDelete(a, i);   
    }

    cout << "heapsorted array after insertion and heap deletion : \n";
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';    
    }

    return 0;   

}  /* end of main() */




