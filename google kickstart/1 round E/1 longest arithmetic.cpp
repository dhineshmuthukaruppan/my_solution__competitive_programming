#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;    



int findTheDifferenceLength(vector<int> vec){

    int res;   

    int counter = 2;   
    int diff = vec[1] - vec[0];       

    int max_counter = 2;    

    if(vec.size() > 2){
        for(int i=2; i<vec.size(); i++){    
            int cur_diff = vec[i] - vec[i-1];  
            if(cur_diff == diff){
                counter++;   
                max_counter = max(max_counter, counter);       
            }else{
                counter = 2;   
                diff = cur_diff;    
            }
        }


    }

    res = max_counter;   

    return res;    

}


int main(){

    vector<int> vec {};   

    int t;    

    cin >> t;   

    for(int i=0; i<t; i++){

        int n;
        cin >> n;
        
        int temp;    
        vector<int> vec(n);         
        for(int j=0; j<n; j++){
            cin >> temp;   
            vec[j] = temp;    
        }


        int res = findTheDifferenceLength(vec);       

        cout << "Case #" << i+1 << ": " << res << '\n';         

    }  /* end of test cases */

    return 0;   

}  /* end of main() */
