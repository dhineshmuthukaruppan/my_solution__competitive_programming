#include <iostream>
#include <vector>

using namespace std;    


class Toy{
    public:
        int EI;  
        int RI;    

        Toy(int EI, int RI){
            this->EI = EI; 
            this->RI = RI;    
        }

};   



int main(){

    vector<Toy> vec;    


    int t;   
    cin >> t;    

    for(int i=0; i<t; i++){
        int n, ei, ri;   
        cin >> n ;    
        for(int i=0; i<n; i++){
            
            cin >> ei >> ri;   
            Toy *temp = new Toy(ei, ri);       

        }

    }  /* end of for i loop  */




    return 0;   

}  /* end of main() */