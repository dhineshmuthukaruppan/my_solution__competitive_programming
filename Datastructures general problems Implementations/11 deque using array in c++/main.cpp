/* 
    LOGIC  

    0 1 2 3 4 5 
    - - - - - - 

    initially front and rear = -1

    case 1
    =====
    enqueuerear = push_back
    if(rear = Q.size-1){
        // you cannot insert because queue full
    }else{
        rear = rear+1
        Q[rear] = data
    }
    

    dequerear = pop_back
    if(front == rear){
        // cannot delete anything because queue empty
    }else{
        deletingdata = Q[rear]
        rear = rear - 1; 
    }

    enqueue front = push_front
    if(front == -1){
        // cannot enqueue front
    }else{
        Q[front] = data; 
        front -= 1; 
    }

    dequeue front = pop_front
    if(front == rear){
        // cannot delete anything
    }else{
        front = front + 1
        deletingdata =  Q[front]
    }

 */


#include <iostream>
#include <string>

using namespace std;   

template <typename T>
class Deque{

    public:
        int front; 
        int rear; 
        int size; 
        T *Q; 

        Deque(int size); 
        ~Deque(); 
        void push_back(T data);
        void pop_back(T *out);
        void push_front(T data);
        T pop_front();  
        void display();   
};


template <typename T>
Deque<T>::Deque(int size){
    this->size = size; 
    this->front = this->rear = -1; 
    this->Q = new T[this->size]; 
}


template <typename T>
Deque<T>::~Deque(){
    cout << "destructor called" << '\n';
    delete [] this->Q; 
}


template <typename T>
void Deque<T>::push_back(T data){
    if(this->rear == this->size - 1){
        throw "cannot insert anything on to the rear side";
    }else{
        this->rear = this->rear + 1; 
        this->Q[this->rear] = data; 
    }
}

template <typename T>
void Deque<T>::pop_back(T *out){
    if(this->front == this->rear){
        throw "cannot pop anything because deque is empty";
    }else{
        *out = this->Q[this->rear]; 
        this->rear -= 1; 
    }
}

template <typename T>
void Deque<T>::push_front(T data){

    if(this->front == -1){
        throw "cannot push anything further on the front";
    }else{
        this->Q[this->front] = data; 
        this->front -= 1; 
    }

}


template <typename T>
T Deque<T>::pop_front(){

    if(this->front == this->rear){
        throw "cannot pop anything on the empty deque";
    }else{
        
        return this->Q[++this->front]; 
    }

}


template <typename T>
void Deque<T>::display(){
    if(this->front == this->rear){
        cout << "Nothing in the Deque \n"; 
    }else{
        int temp_front = this->front; 
        int temp_rear = this->rear; 
        while(temp_front != temp_rear){   
            temp_front += 1; 
            cout << this->Q[temp_front] << ' '; 
        }
        cout << '\n'; 
    }
}



int main(){

    Deque<string> deq{5}; 

    try{
        deq.push_back("hi");   
        deq.push_back("sriram");  
        deq.push_back("deque");
        deq.push_back("program");  

        string data_out; 
        deq.pop_back(&data_out);
        cout << "popped from the back : " << data_out <<  '\n'; // "program must be printed"

        cout << deq.pop_front(); // "hi" should be printed

        deq.push_front("random");

        cout << "displaying data : "; 
        deq.display();   // random sriram deque


    }catch(const char *str){
        cout << str << '\n'; 
    }



    return 0;     

}  /* end of main() */