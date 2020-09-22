#include <iostream>
#include <string>

using namespace std;    

bool isPalindrome(string str){

    for(int i=0; i<str.length(); i++){ 
        int j = str.length() - 1 - i; 

        if(i >= j){
            return true;    
        }

        if(str[i] != str[j]){
            return false;    
        }

    }  /* end of for i loop */

    return true;    

}  /* end of isPalindrome() */


int main(){

    string str = "abcacba";
    cout << boolalpha << isPalindrome(str) << '\n'; 

    string str1 = "abccba";  
    cout << isPalindrome(str1) << '\n';

    string str2 = "apple";   
    cout << isPalindrome(str2) <<'\n';      

    return 0;  

}  /* end of main() */