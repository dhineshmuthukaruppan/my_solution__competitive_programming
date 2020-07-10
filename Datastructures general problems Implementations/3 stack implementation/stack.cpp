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

