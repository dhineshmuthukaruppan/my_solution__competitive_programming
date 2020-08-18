#include <iostream>
#include <string>

using namespace std;    

string caeserCipherEncryptor(string str, int key){

    string str1;    
    for(int i=0; i<str.length(); i++){

        char c = str[i];   

        // if('a' + 3 == 100){  
        //     cout << "yes it is d";   
        // }

        if(c + key > 'z'){
            int diff = c + key - 'z' - 1;
            c = 'a' + diff % 26;   
        }else{
            c += key;    
        }

        str1.push_back(c); 
    
    }  /* end of for i loop  */

    return str1;   

}  /* end of caeserCiperEncrytor() */



int main(){

    string str = "dhinesh";
    string str1 = caeserCipherEncryptor(str, 3);     

    cout << str1;    
    
    return 0;  

}  /* end of main() */
