#include <iostream>
#include <vector>
#include <math.h>

using namespace std;    


void print_vector(const vector<int> &a){

    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';   
    }
    cout << '\n';    

}  /* end of print_array() */



class Node{
    public: 
        int data;    
        Node *link;    

};


int max_element(const vector<int> &a){    

    int max = -INT32_MAX;    

    for(int i=0; i<a.size(); i++){
        if(a[i] > max){
            max = a[i];   
        }
    }

    return max;   

}  /* end of max_element() */

int count_digits(int num){

    int digits = 0;  

    while(num != 0){
        num = num / 10;    
        digits++;    
    }

    return digits;    
    
}  /* end of count_digits */


int getBinIndex(int num, int idx){

    return static_cast<int>(num / pow(10, idx)) % 10;     

}  /* end of getbinIndex() */    


void initialize_bins(Node **bins){

    for(int i=0; i<10; i++){
        bins[i] = nullptr;    
    }

}  /* end of initilize_bins */


void binInsert(Node **bins, int element, int bin_index){

    Node *temp = new Node();  
    temp->data = element;   
    temp->link = nullptr;   

    if(bins[bin_index] == nullptr){
        bins[bin_index] = temp;     
    }else{

        Node *binptr = bins[bin_index];   

        while(binptr->link != nullptr){
            binptr = binptr->link;  
        }

        binptr->link = temp;    
    }

}  /* end of binInsert */



int deleteBin(Node **bins, int binIndex){

    Node* p = bins[binIndex];    

    bins[binIndex] = bins[binIndex]->link;      

    int x = p->data;   

    delete p;    

    return x;   

}  /* end of deleteBIn() */




void radixSort(vector<int> &a){    

    // create 10 bins to store the vector elements
    Node **bins = new Node*[10];   

    // find out the max element of the vector
    int max = max_element(a);      

    int npass = count_digits(max);     

    // initialize bin elements to nullptr
    initialize_bins(bins);      

    for(int pass=0; pass<npass; pass++){   

        for(int i=0; i<a.size(); i++){

            int bin_index = getBinIndex(a[i], pass);     

            binInsert(bins, a[i], bin_index);     

        }  /* end of for i loop  */


        int i = 0; // for iterating bins
        int j = 0; // for iterating array elements

        while(i < 10){
            while(bins[i] != nullptr){
                a[j++] = deleteBin(bins, i);    
            }
            i++; 
        }

        // initialize bins with nullptr
        initialize_bins(bins);    

    }  /* end of for pass loop */

}  /* end of radixSort() */





int main(){

    vector<int> a{33, 23, 22, 56, 87};    

    print_vector(a);     

    radixSort(a);    

    print_vector(a);        


    return 0;   

}  /* end of main() */


