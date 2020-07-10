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
        S pop();       
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
Sc Stack<Sc>::pop(){
    Sc temp_data; 

    if(this->top != NULL){
        temp_data = this->top->data; 
        this->top = this->top->link; 
    }

    return temp_data; 
}

template <typename Sc>
void Stack<Sc>::print(){

    Stack_node<Sc> *temp = this->top; 

    while(temp != NULL){    
        cout << temp->data << "\n";     
        temp = temp->link; 
    }

}  /* end of print() */


int main(){
    int popped_data; 

    Stack<int> *s = new Stack<int>();    

    s->push(5);             
    s->push(6);
    s->push(7);     
    s->push(7);     

    popped_data = s->pop();     

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

*/




