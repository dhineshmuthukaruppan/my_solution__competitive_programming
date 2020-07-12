
#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;     



bool isBalanced(string str){

    map<char, char> mapping; 
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';

    
    // create stack
    stack<char> stk;    

    // create mapping iterator
    map<char, char>::iterator itr;    

    for(int i=0; i<str.size(); i++){
        if(str[i] == '{' || str[i] == '(' || str[i] == '['){
            stk.push(str[i]);    
        }else if(str[i] == '}' || str[i] == ')' || str[i] == ']'){
            if(stk.empty()){
                return false; 
            }else{
                char temp = stk.top(); 
                itr = mapping.find(str[i]);    
                if(temp == itr->second){ // itr->first is key, itr->second is value
                    stk.pop(); 
                }else{
                    return false; 
                }
            }
        }
    }

    return stk.empty() ? true : false;        

}  /* end of isBalanced() */


int main(){

    string A = "{([a+b]*[c-d])/e}";
    cout << isBalanced(A) << endl;


    string B = "{([a+b]}*[c-d])/e}";
    cout << isBalanced(B) << endl;

    string C = "{([{a+b]*[c-d])/e}";
    cout << isBalanced(C) << endl; 


    return 0;   
}  /* end of main() */





/*     
    AB IMPLEMENTATION - parenthesis matching

    #include <iostream>
    #include <cstring>
    using namespace std;
    
    class Stack{
    private:
        int size;
        int top;
        char* S;
    public:
        Stack(int size);
        ~Stack();
        void push(char x);
        char pop();
        char peek(int index);
        int isFull();
        int isEmpty();
        void display();
        char stackTop();
    };
    
    Stack::Stack(int size) {
        this->size = size;
        top = -1;
        S = new char[size];
    }
    
    Stack::~Stack() {
        delete[] S;
    }
    
    void Stack::push(char x) {
        if (isFull()){
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            S[top] = x;
        }
    }
    
    char Stack::pop() {
        char x = 1;
        if (isEmpty()){
            cout << "Stack Underflow!" << endl;
        } else {
            x = S[top];
            top--;
        }
        return x;
    }
    
    char Stack::peek(int index) {
        char x = -1;
        if (top-index+1 < 0 || top-index+1 == size){
            cout << "Invalid position!" << endl;
        } else {
            x = S[top-index+1];
        }
        return x;
    }
    
    int Stack::isFull() {
        if (top == size-1){
            return 1;
        }
        return 0;
    }
    
    int Stack::isEmpty() {
        if (top == -1){
            return 1;
        }
        return 0;
    }
    
    void Stack::display() {
        for (int i=top; i>=0; i--){
            cout << S[i] << " | " << flush;
        }
        cout << endl;
    }
    
    char Stack::stackTop() {
        if (isEmpty()){
            return -1;
        }
        return S[top];
    }
    
    bool isBalanced(char* exp){
    
        // Create a stack
        Stack stk((int)strlen(exp));
    
        // Process expression
        for (int i=0; i<strlen(exp); i++){
    
            // ( found: Push to stack
            if (exp[i] == '('){
                stk.push(exp[i]);
    
                // ( found
            } else if (exp[i] == ')'){
    
                // ) and stack is empty: Unbalanced expression
                if (stk.isEmpty()){
                    return false;
    
                    // ) and stack is not empty
                } else {
                    stk.pop();
                }
            }
        }
    
        // If stack is empty then balanced else unbalanced
        return stk.isEmpty() ? true : false;
    
    }
    
    int main() {
    
        char E[] = "((a+b)*(c-d))";
        cout << isBalanced(E) << endl;
    
        char F[] = "((a+b)*(c-d)))";
        cout << isBalanced(F) << endl;
    
        char G[] = "(((a+b)*(c-d))";
        cout << isBalanced(G) << endl;
        return 0;
        
    } 
    
    
    AB IMPLEMENTATION - BALANCED EXTENDED PARANTHESIS MATCHING
    #include <iostream>
    #include<cstring>
    #include <stack>
    #include <map>

    using namespace std;
    
    int isBalanced(char* exp){
    
        // Create map
        map<char, char> mapping;
        mapping['}'] = '{';
        mapping[')'] = '(';
        mapping[']'] = '[';
    
        // Create map iterator
        map<char, char>::iterator itr;
    
        // Create stack
        stack<char> stk;
    
        for (int i=0; i<strlen(exp); i++){
            if (exp[i] == '{' || exp[i] == '[' || exp[i] == '('){
                stk.push(exp[i]);
            } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
                if (stk.empty()){
                    return false;
                } else {
                    char temp = stk.top();
                    itr = mapping.find(exp[i]);
                    if (temp == itr->second){  // itr->first is key, itr->second is value
                        stk.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return stk.empty() ? true : false;
    }
    
    int main() {
    
        char A[] = "{([a+b]*[c-d])/e}";
        cout << isBalanced(A) << endl;
    
        char B[] = "{([a+b]}*[c-d])/e}";
        cout << isBalanced(B) << endl;
    
        char C[] = "{([{a+b]*[c-d])/e}";
        cout << isBalanced(C) << endl;
    
        return 0;
    }
    
    
    
    
    
    */