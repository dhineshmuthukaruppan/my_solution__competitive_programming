#include <iostream>


using namespace std; 


class CircularQueue{
    public:
        int size; 
        int front; 
        int rear; 
        int *Q; 

        CircularQueue(int size); 
        void enqueue(int data); 
        int dequeue();   
        void display();    

}; 


CircularQueue::CircularQueue(int size){
    this->size = size;   
    this->front = this->rear = 0;   
    this->Q = new int[this->size];    
}


void CircularQueue::enqueue(int data){
    // check for queue full condition. If queue not full, then insert the data on to the 
    // queue
    if((this->rear + 1) % this->size == this->front ){
        cout << "queue is full \n"; 
    }else{
        this->rear = (this->rear + 1) % this->size;   
        this->Q[this->rear] = data;    
    }
}  /* end of CircularQueue::enqueue */


int CircularQueue::dequeue(){
    int x = -1;     

    if(this->front == this->rear){
        cout << "Queue is empty \n"; 
    }else{
        this->front = (this->front + 1) % this->size;   
        x = this->Q[this->front]; 
    }

    return x;    

}  /* end of CircularQueue::dequeue */


void CircularQueue::display(){
    int i = this->front + 1; 

    do{ 
        cout << this->Q[i] << '\n';
        i = (i + 1) % this->size; 

    }while(i !=  (this->rear + 1) % this->size);   

    cout << '\n';   

}  /* end of CircularQueue::display() */




int main(){

    CircularQueue q{5};    

    q.enqueue(100); 
    q.enqueue(120);    
    q.enqueue(130);  
    q.enqueue(140);  
    q.enqueue(150);
    q.enqueue(160);       

    cout << "Popped out from the queue : " << q.dequeue() << '\n';   

    q.display();    

    return 0;  

}  /* main() function */