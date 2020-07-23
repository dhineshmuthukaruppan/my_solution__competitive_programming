#include <iostream>
#include <stack>


using namespace std;    

class Treenode{

    public:
        Treenode *lchild; 
        Treenode *rchild; 
        int data; 

};


class BST{

    public:
        Treenode *root; 
        BST(); 
        ~BST();     

        void insert(int key); 
        void inorderDisplay(Treenode *p);      
        Treenode* search(int key);   
        
};      


BST::BST(){
    root = NULL; 
}

BST::~BST(){
    cout << "destructor called" << endl; 

}

void BST::insert(int key){

    Treenode *p, *t;    

    if(root == NULL){
        t = new Treenode(); 
        t->lchild = t->rchild = NULL; 
        t->data = key;   
        root = t;   
        return; 
    }

    t = root;    

    while(t != NULL){
        p = t;   

        if(key < t->data){
            t = t->lchild;    
        }else if(key >t->data){
            t = t->rchild;    
        }else{
            return;   
        }

    }  /* end of while(t != NULL) */

    t = new Treenode();   
    t->lchild = t->rchild = NULL; 
    t->data = key;   
    if(key < p->data){
        p->lchild = t;   
    }else{
        p->rchild = t; 
    }

}  /* end of BST::insert(int key) */


void BST::inorderDisplay(Treenode *p){   
    
    if(p){
        inorderDisplay(p->lchild);   
        cout << p->data << " ";  
        inorderDisplay(p->rchild);      
    }

}  /* end of BST::inorderDisplay() */



Treenode* BST::search(int key){    

    Treenode *s; 

    s = root;      

    while(s != NULL){

        if(key == s->data){
            return s; 
        }else if(key < s->data){
            s = s->lchild;    
        }else if(key > s->data){
            s = s->rchild;    
        }
    }

    return nullptr;    

}  /* end of Treenode* search() */




int main(){

    BST t; 

    t.insert(50); 
    t.insert(10);
    t.insert(20);
    t.insert(30);
    t.insert(60);   

    cout << "\nInorder display\n";  /* expected output 10, 20, 30, 50, 60 */ 
    t.inorderDisplay(t.root);         

    Treenode *temp = t.search(30);   
    if(temp){
        cout << "\nData found " << temp->data << '\n';
    }else{
        cout << "\nSearch data not found\n";
    } 

    return 0;   

}  /* end of main()  */


