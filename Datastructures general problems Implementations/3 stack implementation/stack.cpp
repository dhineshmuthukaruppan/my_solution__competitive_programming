#include <iostream> 

using namespace std;     

template <typename T>
class Stack_node{

    public:
        T data;    
        Stack_node *link; 

}; /* end of Stack_node */


template <typename S>
class Stack{

    public:
        Stack_node<S> *top; 

        Stack(){      
            this->top = nullptr; 
        }

        void push(S data);       
        void pop(S *popped_data);         
        void print();   

};  /* end of Stack */


template <typename Sc>
void Stack<Sc>::push(Sc data){      
    
    Stack_node<Sc> *newnode = new Stack_node<Sc>(); 
    newnode->data = data;   
    newnode->link = this->top; 
    this->top = newnode; 

}  /* end of Stack::push() */

template <typename Sc>
void Stack<Sc>::pop(Sc *popped_data){

    *popped_data = -1; 
    Stack_node<Sc> *temp;    

    if(this->top != NULL){
        temp = this->top; 
        *popped_data = this->top->data; 
        this->top = this->top->link; 
        free(temp);     
    }

}        

template <typename Sc>
void Stack<Sc>::print(){

    Stack_node<Sc> *temp = this->top; 

    while(temp != NULL){    
        cout << temp->data << "\n";     
        temp = temp->link; 
    }

}  /* end of print() */


// int returnFunction(){
//     exit(EXIT_FAILURE);     
// }

int main(){
    int popped_data; 

    Stack<int> *s = new Stack<int>();    

    // cout << EXIT_FAILURE; 
    // cout << returnFunction();     

    s->push(5);             
    s->push(6);
    s->push(7);     
    s->push(7);     

    s->pop(&popped_data);         

    cout << "popped data is : " << popped_data << "\n"; 

    s->print();        

    return 0; 

} /* end of main() function */




/* geeks for geeks implementation 

    // C++ program for linked list implementation of stack 
    #include <bits/stdc++.h> 
    using namespace std; 
    
    // A structure to represent a stack 
    class StackNode { 
    public: 
        int data; 
        StackNode* next; 
    }; 
    
    StackNode* newNode(int data) 
    { 
        StackNode* stackNode = new StackNode(); 
        stackNode->data = data; 
        stackNode->next = NULL; 
        return stackNode; 
    } 
    
    int isEmpty(StackNode* root) 
    { 
        return !root; 
    } 
    
    void push(StackNode** root, int data) 
    { 
        StackNode* stackNode = newNode(data); 
        stackNode->next = *root; 
        *root = stackNode; 
        cout << data << " pushed to stack\n"; 
    } 
    
    int pop(StackNode** root) 
    { 
        if (isEmpty(*root)) 
            return INT_MIN; 
        StackNode* temp = *root; 
        *root = (*root)->next; 
        int popped = temp->data; 
        free(temp); 
    
        return popped; 
    } 
    
    int peek(StackNode* root) 
    { 
        if (isEmpty(root)) 
            return INT_MIN; 
        return root->data; 
    } 
    
    int main() 
    { 
        StackNode* root = NULL; 
    
        push(&root, 10); 
        push(&root, 20); 
        push(&root, 30); 
    
        cout << pop(&root) << " popped from stack\n"; 
    
        cout << "Top element is " << peek(root) << endl; 
    
        return 0; 
} 


tutorials point template implementation in c++
    #include <iostream>
    #include <vector>
    #include <cstdlib>
    #include <string>
    #include <stdexcept>

    using namespace std;

    template <class T>
    class Stack { 
    private: 
        vector<T> elems;    // elements 

    public: 
        void push(T const&);  // push element 
        void pop();               // pop element 
        T top() const;            // return top element 
        
        bool empty() const {      // return true if empty.
            return elems.empty(); 
        } 
    }; 

    template <class T>
    void Stack<T>::push (T const& elem) { 
    // append copy of passed element 
    elems.push_back(elem);    
    } 

    template <class T>
    void Stack<T>::pop () { 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::pop(): empty stack"); 
    }
    
    // remove last element 
    elems.pop_back();         
    } 

    template <class T>
    T Stack<T>::top () const { 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::top(): empty stack"); 
    }
    
    // return copy of last element 
    return elems.back();      
    } 

    int main() { 
    try {
        Stack<int>         intStack;  // stack of ints 
        Stack<string> stringStack;    // stack of strings 

        // manipulate int stack 
        intStack.push(7); 
        cout << intStack.top() <<endl; 

        // manipulate string stack 
        stringStack.push("hello"); 
        cout << stringStack.top() << std::endl; 
        stringStack.pop(); 
        stringStack.pop(); 
    } catch (exception const& ex) { 
        cerr << "Exception: " << ex.what() <<endl; 
        return -1;
    } 
    } 




AB implementation in c
stack using array

#include <stdio.h>
#include <stdlib.h>
struct Stack
{
int size;
int top;
int *S;
};
void create(struct Stack *st)
{
printf("Enter Size");
scanf("%d",&st->size);
st->top=-1;
st->S=(int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack st)
{
int i;
for(i=st.top;i>=0;i--)
printf("%d ",st.S[i]);
printf("\n");
}
void push(struct Stack *st,int x)
{
if(st->top==st->size-1)
printf("Stack overflow\n");
else
{
st->top++;
st->S[st->top]=x;
}}
int pop(struct Stack *st)
{
int x=-1;
if(st->top==-1)
printf("Stack Underflow\n");
else
{
x=st->S[st->top--];
}
return x;
}
int peek(struct Stack st,int index)
{
int x=-1;
if(st.top-index+1<0)
printf("Invalid Index \n");
x=st.S[st.top-index+1];
return x;
}
int isEmpty(struct Stack st)
{
if(st.top==-1)
return 1;
return 0;
}
int isFull(struct Stack st)
{
return st.top==st.size-1;
}
int stackTop(struct Stack st)
{
if(!isEmpty(st))return st.S[st.top];
return -1;
}
int main()
{
struct Stack st;
create(&st);
push(&st,10);
push(&st,20);
push(&st,30);
push(&st,40);
printf("%d \n",peek(st,2));
Display(st);
return 0;
}



AB implementation of stack in c++
stack implementation in c++

    #include <iostream>
    using namespace std;

    class Stack{
    private:
        int size;
        int top;
        int* S;
    public:
        Stack(int size);
        ~Stack();
        void push(int x);
        int pop();
        int peek(int index);
        int isFull();
        int isEmpty();
        void display();
        int stackTop();
    };
    
    Stack::Stack(int size) {
        this->size = size;
        top = -1;
        S = new int[size];
    }
    
    Stack::~Stack() {
        delete[] S;
    }
    
    void Stack::push(int x) {
        if (isFull()){
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            S[top] = x;
        }
    }
    
    int Stack::pop() {
        int x = 1;
        if (isEmpty()){
            cout << "Stack Underflow!" << endl;
        } else {
            x = S[top];
            top--;
        }
        return x;
    }
    
    int Stack::peek(int index) {
        int x = -1;
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
    
    int Stack::stackTop() {
        if (isEmpty()){
            return -1;
        }
        return S[top];
    }
    
    
    int main() {
    
        int A[] = {1, 3, 5, 7, 9};
    
        Stack stk(sizeof(A)/sizeof(A[0]));
    
        // Populate stack with array elements
        for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
            stk.push(A[i]);
        }
        stk.push(11);
    
        cout << "Stack full: " << stk.isFull() << endl;
    
        // Display stack;
        cout << "Stack: " << flush;
        stk.display();
    
        // Peek
        cout << "Peek at 0th: " << stk.peek(0) << endl;
        cout << "Peek at 3rd: " << stk.peek(3) << endl;
        cout << "Peek at 10th: " << stk.peek(10) << endl;
    
        // Top element
        cout << "Top element: " << stk.stackTop() << endl;
    
        // Pop out elements from stack
        cout << "Popped out elements: " << flush;
        for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
            cout << stk.pop() << ", " << flush;
        }
        cout << endl;
        stk.pop();
    
        cout << "Stack empty: " << stk.isEmpty() << endl;
    
        return 0;
    }

*/




