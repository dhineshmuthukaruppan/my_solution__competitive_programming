#include <iostream>

using namespace std; 

template <typename T>
class Queue_node{
    public:
        T data; 
        Queue_node *link; 

}; 


template <typename Q>
class Queue{
    public:
        Queue_node<Q> *front; 
        Queue_node<Q> *rear; 
        int count;

        Queue(){
            this->front = nullptr; 
            this->rear = nullptr;  
            this->count = 0;    
        }
        
};

template <typename Q>
void enqueue(Queue<Q> **q, Q data){    

    Queue_node<Q> *newnode = new Queue_node<Q>();   
    newnode->data = data; 
    
    if((*q)->front == NULL && (*q)->rear == NULL){   
        newnode->link = NULL;    
        (*q)->front = (*q)->rear = newnode;    
    }else{
        newnode->link = NULL; 
        (*q)->rear->link = newnode; 
        (*q)->rear = newnode; 
    }  

    (*q)->count++; 

}  /* end of enqueue() */


template <typename Q>
void deque(Queue<Q> **q, Q *dataout){

    if((*q)->count == 0){
        *dataout = -32768; 
    }else if((*q)->count == 1){
        *dataout = (*q)->front->data; 
        Queue_node<Q> *temp = (*q)->front; 
        (*q)->front = (*q)->rear = NULL; 

        free(temp);    
    }else{
        *dataout = (*q)->front->data; 
        Queue_node<Q> *temp = (*q)->front; 
        (*q)->front = (*q)->front->link; 

        free(temp);     
    }

    (*q)->count--;   

}  /* end of deque() */


template <typename Q>
void printQ(Queue<Q> *q){    
    // with out copy constructor, this ptr's inside will be copied as it is. So if we change it, it also changes the original object.       
    // while(q->front != NULL){
    //     cout << q->front->data << "\n"; 
    //     q->front = q->front->link; 
    // }
    // cout << q << endl;  // same as outside but address is different
    Queue_node<Q> *temp = q->front; 

    while(temp != NULL){
        cout << temp->data << "\n"; 
        temp = temp->link; 
    }  

}  /* end of printQ() */

int main(){

    int dataout; 

    Queue<int> *q = new Queue<int>();    

    enqueue(&q, 5);         
    enqueue(&q, 6); 
    enqueue(&q, 7);

    deque(&q, &dataout);     
    cout << "popped from the queue :" << dataout << "\n"; 

    cout << "printing Q for the first time \n";    
    printQ(q);
    cout << "printing for the second time \n";           
    printQ(q);    

    // cout << q << endl; 

    return 0;   
}
