/* Towers of hanoi - O(2^n) */


#include <iostream>

using namespace std;    


void towers(int num_of_disk, char src, char dest, char aux){

    static int step = 0; 

    cout << "Towers " << num_of_disk << src << dest << aux << "\n"; 

    if(num_of_disk==1){
        ++step;
        cout << step << "-> Move from " << src << " -> " << dest << "\n"; 
        
    }else{
        towers(num_of_disk-1, src, aux, dest);
        ++step;
        cout << step << "-> Move from " << src << " -> " << dest << "\n"; 
        towers(num_of_disk-1, aux, dest, src);    
    }

}  /* end of towers() */


int main (){

    int num_of_disk; 

    cout << "number of disk "; 
    cin >> num_of_disk; 

    towers(num_of_disk, 'A', 'C', 'B'); 


    return 0;   
}