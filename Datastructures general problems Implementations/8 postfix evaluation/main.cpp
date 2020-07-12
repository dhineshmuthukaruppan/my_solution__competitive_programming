#include <iostream>
#include <stack>
#include <string>

using namespace std;    


bool isOperand(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' ){
        return false; 
    }else{
        return true;   
    }
} 


int operation(int x, char op, int y){
    if (op == '+'){
        return x + y;
    } else if (op == '-'){
        return x - y;
    } else if (op == '*'){
        return x * y;
    } else if (op == '/'){
        return x / y;
    }
}


int postfixEvaluate(string postfix){

    stack<int> stk;    

    int x, y, result;    


    for(int i=0; i<postfix.size(); i++){

        if(isOperand(postfix[i])){
            // the push the current operand to stack
            // int typecast would not work because of char so subtract '0'
            stk.push(postfix[i] - '0'); 
        }else{
            // if it is a operator then, pop top 2 elements from the stack and do the operation using 
            // current operator and save the result on to the stack.

            y = stk.top(); 
            stk.pop(); 
            x = stk.top(); 
            stk.pop(); 
            result = operation(x, postfix[i], y); 
            stk.push(result); 

        }

    } /* end of for i loop */

    result = stk.top(); 
    stk.pop(); 
    return result;    

}  /* end of postfixEvaluate */



int main(){

    string postfix = "35*62/+4-"; 

    cout << postfixEvaluate(postfix) << endl;   

    return 0;   
}

