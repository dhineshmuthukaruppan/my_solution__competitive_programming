#include <iostream>
#include <vector>


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






int main(){

    vector<int>a {1, 3, 8, 2, 9, 2, 5, 6};   

    bubbleSort(a); 



    return 0;   

} /* end of main() */