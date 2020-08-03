/* row major mapping */


#include <iostream>

using namespace std;    

class LowerTri{

    public:
        int *A;   
        int n;   

        LowerTri(int n);       
        ~LowerTri();   
        void setRowMajorMapping(int i, int j, int x);   
        void setColumnMajorMapping(int i, int j, int x);      
        int getRowMajorMapping(int i, int j); 
        int getColumnMajorMapping(int i, int j);      
        void display(bool row);   
        

};

LowerTri::LowerTri(int n){

    A = new int[n];    
    this->n = n;     

}  /* end of LowerTri() */


LowerTri::~LowerTri(){

    cout << "Destructor called for LowerTri\n";     


}  /* end of ~LowerTri() */


void LowerTri::setRowMajorMapping(int i, int j, int x){    

    if(i >= j){
        A[(i * (i - 1) / 2) + j - 1] = x; 
    }

}  /* end of setRowMajorMapping() */


void LowerTri::setColumnMajorMapping(int i, int j, int x){    

    if(i >= j){
        A[(n * (j-1) - (((j-2) * (j-1))/2)) + (i-j)] = x;    
    }


}  /* end of setColumnMajorMapping() */


int LowerTri::getRowMajorMapping(int i, int j){

    if(i>=j){   
        return A[(i * (i - 1) / 2) + j - 1];
    }else{
        return 0;   
    }

}  /* end of getRowMajorMapping */


int LowerTri::getColumnMajorMapping(int i, int j){

    if(i >= j){
        return A[(n * (j-1) - (((j-2) * (j-1))/2)) + (i-j)];
    }else{
        return 0;  
    }

}  /* end of getColumnMajorMapping() */



void LowerTri::display(bool row){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            if(row){
                cout << getRowMajorMapping(i, j) << " ";    
            }else{
                cout << getColumnMajorMapping(i, j) << " "; 
            }

        }
        cout << '\n';    
    }

}  /* end of display */




int main(){


    LowerTri lt{3};   

    int x;   
    cout << "Enter values for 3*3 lower triangular matrix \n";   
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){

            cin >> x;   
            lt.setRowMajorMapping(i, j, x);    

        }
    
    }

    cout << '\n';    
    lt.display(true);      

    return 0;  

}