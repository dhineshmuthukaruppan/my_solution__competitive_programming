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

        ~Queue(){
            cout << "destructor getting called" << '\n'; 
            
            Queue_node<Q> *temp; 

            while(this->front != NULL){
                cout << "deleting data : " << this->front->data << '\n';     
                temp = this->front;           
                this->front = this->front->link; 
                delete temp;                  
            }  
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

    delete q; 

    return 0;   
}



/* AB IMPLEMENTATION - Queue using array in c

#include <stdio.h>
#include <stdlib.h>
struct Queue
{
int size;
int front;
int rear;
int *Q;
};
void create(struct Queue *q,int size)
{
q->size=size;
q->front=q->rear=-1;
q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x)
{
if(q->rear==q->size-1)
printf("Queue is Full");
else
{
q->rear++;
q->
Q[q->rear]=x;
}
}
int dequeue(struct Queue *q)
{
int x=-1;
if(q->front==q->rear)
printf("Queue is Empty\n");
else
{q->front++;
x=q->Q[q->front];
}
return x;
}
void Display(struct Queue q)
{
int i;
for(i=q.front+1;i<=q.rear;i++)
printf("%d ",q.Q[i]);
printf("\n");
}
int main()
{
struct Queue q;
create(&q,5);
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
Display(q);
printf("%d ",dequeue(&q));
return 0;
}



 */

