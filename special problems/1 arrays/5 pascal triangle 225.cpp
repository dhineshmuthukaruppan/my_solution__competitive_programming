#include <iostream>
#include <vector>


using namespace std; 



int main(){


    int A = 5;    

    vector<vector<int>> vec(A, vector<int>(0));        

    vec[0].push_back(1); 

    for(int i=1; i<A; i++){

        for(int j=0; j<=i; j++){
            int sumFromPrev = 0;  
            if(j == 0){
                sumFromPrev += vec[i-1][0];   
            }else if(j == i){
                sumFromPrev += vec[i-1][j-1];    
            }else{
                sumFromPrev += vec[i-1][j];   
                sumFromPrev += vec[i-1][j-1];    
            }

            vec[i].push_back(sumFromPrev);      


        }  /* end of for j loop */

    }  /* end of for i loop  */


    cout << "pascal triangle print \n";    
    for(int i=0; i<vec.size();  i++){
        for (int j=0; j<vec[i].size(); j++){
            cout << vec[i][j] << ' ';
        }
        cout << '\n';    
    }


    return 0;   

}  /* end of main() */


/* output
pascal triangle print 
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 

 */