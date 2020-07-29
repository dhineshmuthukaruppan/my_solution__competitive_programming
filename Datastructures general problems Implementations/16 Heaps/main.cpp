#include <iostream>
#include <vector>


using namespace std;    


void maxHeapInsert(vector<int> &a, int p){    

    int temp, i = p;    

    temp = a[i];   

    while(i > 1 && temp > a[i/2]){
        a[i] = a[i/2];   
        i = i / 2;    
    }

    a[i] = temp;    

}  /* end of heapInsert() */



void maxHeapify(vector<int> &a){

    int temp, n = a.size() - 1; 

    for(int i=n/2; i>0; i--){

        int k = i;    
        int j = 2 * k;        

        while(j <= n){
            if(j < n && a[j+1] > a[j]){
                j = j + 1; 
            }

            if(a[k] < a[j]){
                temp = a[j];  
                a[j] = a[k];  
                a[k] = temp;    

                k = j;    
                j = 2 * k;    
            }else{
                break;    
            }

        }  /* end of while loop */


    }  /* end of for i loop */


}  /* end of maxHeapify() */



int maxHeapDelete(vector<int> &a, int p){

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

    // O(n*logn)
    // for(int i=2; i<a.size(); i++){
    //     maxHeapInsert(a, i);       
    // }  
        
    // O(n)
    maxHeapify(a);     

    for(int i=a.size()-1; i>0; i--){
        maxHeapDelete(a, i);   
    }

    cout << "heap sorted array after insertion and heap deletion : \n";
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';    
    }

    return 0;   

}  /* end of main() */




