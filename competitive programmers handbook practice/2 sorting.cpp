#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;    

void swap(int &a, int &b){
    int temp = a; 
    a = b; 
    b = temp;    

}  /* end of swap() */


/* O(n^2) */
void bubbleSort(vector<int> a){

    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a.size()-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]); 
            }    
        }
    }

    cout << "Bubble sort\n";     
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";   
    }
    cout << '\n';

}  /* end of bubbleSort() */


/* O(n^2) */
void insertionSort(vector<int> a){

    for(int i=1; i<a.size(); i++){   
        int temp = a[i];
        int j; 
        for(j=i-1; j>=0; j--){
            if(temp < a[j]){
                a[j+1] = a[j];   
            }else{
                break;    
            }
        }

        a[j+1] = temp;   
    }


    cout << "Insertion sort\n";     
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";   
    }
    cout << '\n';



}  /* end of insertionSort() */


void merge(vector<int> &arr, int l, int m, int r){

    int arraysize1 = m - l + 1;
    int arraysize2 = r - m;   

    vector<int> v1, v2; 

    for(int i=0; i<arraysize1; i++){
        v1.push_back(arr[l + i]);     
    }

    for(int i=0; i<arraysize2; i++){
        v2.push_back(arr[m + 1 + i]); 
    }

    int i = 0; 
    int j = 0; 
    int k = l;   

    while(i < arraysize1 && j < arraysize2){
        if(v1[i] < v2[j]){
            arr[k] = v1[i];
            i++; 
            k++;   
        }else{
            arr[k] = v2[j];  
            j++; 
            k++;   
        }
    }

    while(i < arraysize1){
        arr[k] = v1[i]; 
        i++; 
        k++; 
    }

    while(j < arraysize2){
        arr[k] = v2[j]; 
        j++; 
        k++;     
    }

}  /* end of merge() */



void mergeSort(vector<int> &arr, int l, int r){

    if(l < r){
        int m = (l+r)/2;   
        // int m = l + (r - l) / 2;        
        mergeSort(arr, l, m);   
        mergeSort(arr, m+1, r);     
        merge(arr, l, m, r);          
    }

}  /* end of mergeSort() */



int main(){

    vector<int>a {1, 3, 8, 2, 9, 2, 5, 6};   

    bubbleSort(a); 

    insertionSort(a);      

    sort(a.begin(), a.end());    
    vector<int>::iterator it1 = a.begin();
    cout << "algorithmic sort\n";
    while(it1 != a.end()){
        cout << *it1 << " ";
        it1++;  
    }
    cout << '\n';    


    vector<int>b {1, 3, 8, 2, 9, 2, 5, 6};   
    mergeSort(b, 0, b.size() - 1);           


    vector<int>::iterator it = b.begin();
    cout << "merge sort: \n";
    cout << "size of array: " << b.size() << '\n';    

    while(it != b.end()){
        cout << *it << " ";
        it++;  
    }
    cout << '\n';   
    return 0;   

} /* end of main() */