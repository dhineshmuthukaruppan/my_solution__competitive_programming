#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int getMax(stack<int> stk){    

    int temp, max = -1; 

    while(!stk.empty()){
        temp = stk.top(); 
        if(temp > max){
            max = temp; 
        }
        stk.pop(); 
    }

    return max; 

}  /* end of getMaz() */

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   


    int n, i_1, i_2, max_current = -1, max_prev = -1;        
    stack<int> stk; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> i_1; 
        if(i_1 == 1){
            // get another element and push it into stack
            cin >> i_2; 
            stk.push(i_2);     

            if(i_2 > max_current){
                max_current = i_2; 
                // max_prev = max_current; 
            }

        }else if(i_1 == 2){

            if(stk.top() != max_current){
                stk.pop(); 
            }else{
                // pop the top element of the stack
                stk.pop(); 
                max_current = getMax(stk);     
            }

        }else if(i_1 == 3){
            // get the maximum element of the stack and print it in newline
            // getMax(stk); 
            cout << max_current << "\n";    
        }

    }  /* end of for i loop */


    return 0;
}
