#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;   




int main(){

    vector<int> a {5, 9, 13, 17, 19, 23};


    int l = 0, h = a.size() - 1;    

    int target_element = 9;   
    bool elementfound = false;   

    while(l <= h){    
        
        int mid = (l + h) / 2;    
        if(target_element == a[mid]){
            cout << "element found at position " << mid << '\n';
            elementfound = true;    
            break;   
        }

        if(target_element > a[mid]){
            l = mid + 1;    
        }else{
            h = mid - 1; 
        }

    }

    if(elementfound == false){
        cout << "target element not found \n";    
    }




    return 0;   

}  /* end of main() */