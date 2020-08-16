#include <iostream>
#include <vector>
#include <map>

using namespace std;   


bool bruteforceTwonumberSum(vector<int> &a, int sum, int &result1, int &result2){

    for(int i=0; i<a.size(); i++){
        int firstnumber = a[i];
        for(int j=i+1; j<a.size(); j++){
            int secondnumber = a[j];   

            if(firstnumber + secondnumber == sum){
                result1 = firstnumber;   
                result2 = secondnumber;      
                return true;   
            }    
        }
    }

    return false;    

}  /* end of bruteforceTwonumberSum() */



bool hashtableTwonumberSum(vector<int> &a, int sum, int &result1, int &result2){

    map<int, int> mp;    

    for(int i=0; i<a.size(); i++){
        mp[a[i]] = 1;    
    }

    for(int i=0; i<a.size(); i++){
        int diff = sum - a[i];   
        if(diff == a[i]){
            continue;     
        }
        auto it = mp.find(diff);   
        if(it != mp.end()){
            result1 = a[i]; 
            result2 = diff;
            return true;             
        }
    }

    return false;    

}  /* end of hashtableTwonumberSum() */



int main(){

    vector<int> a {3, 5, -4, 8, 11, 1, -1, 6};    

    int result1 = -1, result2 = -1;     
    // Time - O(n^2)
    cout << bruteforceTwonumberSum(a, 10, result1, result2) << ' ' <<result1 << ' ' << result2 << '\n';           

    result1 = -1; result2 = -1;     
    cout << hashtableTwonumberSum(a, 13, result1, result2) << ' ' <<result1 << ' ' << result2 << '\n';    


    return 0;   

}