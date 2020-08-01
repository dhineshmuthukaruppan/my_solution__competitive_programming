#include <iostream>
#include <vector>
#include <string>

using namespace std;   


vector<int> subset;   

/* O(2 ^ n) */
void generateSubsetRecursionStackApproach(int k, int n){

    if(k == n){
        // process subset

        for(int i=0; i<subset.size(); i++){
            cout << subset[i] << ", "; 
        }
        cout << '\n';    

    }else{
        generateSubsetRecursionStackApproach(k + 1, n);   
        subset.push_back(k);   
        generateSubsetRecursionStackApproach(k + 1, n);   
        subset.pop_back();      

    }

}  /* end of generateSubsetRecursionStackApproach */


void generateSubsetString(string &s, vector<char> &subset, int stringPosition, int subsetPosition){   

    if(stringPosition == s.size()){
        // print subset 

        for(int i = 0; i<subset.size(); i++){
            cout << subset[i];   
        }
        cout << '\n';    
    }else{

        generateSubsetString(s, subset, stringPosition + 1, subsetPosition);          
        
        subset[subsetPosition] = s[stringPosition];    
        generateSubsetString(s, subset, stringPosition + 1, subsetPosition + 1);        

        // subset[subsetPosition] = s[stringPosition];   
        // generateSubsetString(s, subset, stringPosition + 1, subsetPosition + 1);          
        
        // subset[subsetPosition] = ' ';   
        // generateSubsetString(s, subset, stringPosition + 1, subsetPosition + 1);  
        
        /*  abc
            ab 
            a c
            a  
            bc
            b 
            c 
        */
    }


}  /* end of generateSubsetString() */



int main(){

    generateSubsetRecursionStackApproach(0, 3);       


    string s = "dhinesh"; 
    vector<char> subset(s.size());    
    generateSubsetString(s, subset, 0, 0);            

    return 0; 

}
