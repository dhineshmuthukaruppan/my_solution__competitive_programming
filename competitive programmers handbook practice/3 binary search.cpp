#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;   

int main(){

    /* 
        checking equality 
        a < b == false and b < a == false
        then a and b are equal
     */

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


    /* Alternative method
        int k = 0;
        for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x) k += b;
        }
        if (array[k] == x) {
        // x found at index k
        }
    */

/*     lower_bound
    Finds the beginning of a subsequence matching given key.

    Parameters:
    __x – Key to be located.

    Returns:
    Iterator pointing to first element equal to or greater than key, or end(). This function returns the first element of a 
    subsequence of elements that matches the given key. If unsuccessful it returns an iterator pointing to the first element 
    that has a greater value than given key or end() if no such element exists. */

    vector<int> b {5, 9, 13, 13, 13, 13, 13, 13, 17, 19, 23};

    auto ptr1 = lower_bound(b.begin(), b.end(), 10);     
        
    cout << "lower bound of 10 is " << *ptr1 << '\n';

    auto ptr2 = upper_bound(b.begin(), b.end(), 10);   

    cout << "upper bound of 10 is " << *ptr2 << '\n';   

    cout << "count element " << ptr2 - ptr1 << '\n';    

    auto r = equal_range(b.begin(), b.end(), 13);   

    cout << "count 13 " << r.second - r.first << '\n';    

/*  -   lower_bound returns a pointer to the first array element whose value is at
    least x .
    - upper_bound returns a pointer to the first array element whose value is
    larger than x .
    - equal_range returns both above pointers. */


    return 0;        

}  /* end of main() */