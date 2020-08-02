#include <iostream>
#include <vector>

using namespace std;    



class Node{
    public:
        int data;   
        Node *next;    

};   


class Hashtable{

    public:
        Node **HT; 
        Hashtable();   
        ~Hashtable();   
        int hash(int key); 
        void insert(int key);    
        int search(int key);   
        
};


Hashtable::Hashtable(){

    HT = new Node*[10];   
    for(int i=0; i<10; i++){
        HT[i] = nullptr;    
    }

}  /* end of Hashtable */


Hashtable::~Hashtable(){
    cout << "Hashtable destructor called \n";

    for(int i=0; i<10; i++){
        Node *p = HT[i];   
        while(HT[i]){
            HT[i] = HT[i]->next;   
            delete p;   
            p = HT[i];    
        }
    }

    delete [] HT;    

}  /* end of ~Hashtable() */


int Hashtable::hash(int key){

    return key % 10;   

}  /* end of hash() */


void Hashtable::insert(int key){

    int insert_index = hash(key);    

    Node *temp = new Node();    
    temp->data = key;   
    temp->next = nullptr;    

    // insert the temp on the index if there is no node in that linked list
    if(HT[insert_index] == nullptr){
        HT[insert_index] = temp;     
    }else{

        Node *q = HT[insert_index];  
        Node *p = HT[insert_index];    

        while(p && p->data < key){
            q = p; 
            p = p->next;    
        }

        // if q is head node. which means insert position is head
        if(q == HT[insert_index]){
            temp->next = HT[insert_index];   
            HT[insert_index] = temp;    

        }else{
            temp->next = q->next; 
            q->next = temp;    
        }

    }

}  /* end of insert() */



int Hashtable::search(int key){

    int search_index = hash(key);     

    Node *p = HT[search_index];

    while(p){
        if(p->data == key){
            return p->data;    
        }else if(p->data > key){
            return -1;      
        }   
        p = p->next;    
    }

    return -1;

}  /* end of search() */



int main(){

    int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
	int n = sizeof(A)/sizeof(A[0]);
	Hashtable H;
	for (int i=0; i<n; i++){
		H.insert(A[i]);
	}
	cout << "Successful Search" << endl;
	int key = 6;
	int value = H.search(key);
	cout << "Key: " << key << ", Value: " << value << endl;
	
    cout << "Unsuccessful Search" << endl;
	key = 95;
	value = H.search(key);
	cout << "Key: " << key << ", Value: " << value << endl;



    return 0;   

}  /* end of main() */