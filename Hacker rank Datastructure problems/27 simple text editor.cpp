#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   


    string s = ""; 
    stack<string> stk;    

    int q, type; 

    cin >> q; 

    for(int i=0; i<q; i++){

        cin >> type; 

        if(type == 1){
            string str; 
            cin >> str; 
            stk.push(s);
            s += str; 

        }else if(type == 2){
            int k; 
            cin >> k; 
            stk.push(s);
            s.erase(s.size() - k); 

        }else if(type == 3){
            int k; 
            cin >> k; 
            cout << s[k-1] << '\n'; 

        }else if(type == 4){
            s = stk.top(); 
            stk.pop(); 
        }

    } /* end of for i loop  */
    
    return 0;
}
