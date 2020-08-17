#include <iostream>
#include <stack>
#include <vector> 

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
        Treenode* rInsert(Treenode *p, int key);         
        void inorderDisplay(Treenode *p);      
        void preorderDisplay(Treenode *p);     
        Treenode* search(int key);   
        Treenode* rSearch(Treenode *p, int key); 
        int height(Treenode *p); 
        Treenode* inorderPredecessor(Treenode *p);   
        Treenode* inorderSuccessor(Treenode *p);      
        Treenode* Delete(Treenode *p, int key);    
        void createFromPreorderTraversal(vector<int> pre);    

        int closestValueIterativeMethod(Treenode *p, int key);

        int closestValueRecursiveMethod(Treenode *p, int key);      

        void branchSums(Treenode *p, int runningSum, vector<int> &result);        

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


Treenode* BST::rInsert(Treenode *p, int key){

    Treenode *t; 

    if(p == NULL){
        t = new Treenode();   
        t->lchild = t->rchild = NULL; 
        t->data = key;
        return t; 
    }

    if(key < p->data){
        p->lchild = rInsert(p->lchild, key);     

    }else if(key > p->data){
        p->rchild = rInsert(p->rchild, key); 
    
    }

    return p;    

}  /* end of BST::rInsert() */




void BST::inorderDisplay(Treenode *p){   
    
    if(p){
        inorderDisplay(p->lchild);   
        cout << p->data << " ";  
        inorderDisplay(p->rchild);      
    }

}  /* end of BST::inorderDisplay() */


void BST::preorderDisplay(Treenode *p){

    if(p){
        cout << p->data << ' ';   
        preorderDisplay(p->lchild);   
        preorderDisplay(p->rchild);           
    }

}  /* end of BST::preorderDisplay */



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


Treenode* BST::rSearch(Treenode *p, int key){

    if(p ==  nullptr){
        return nullptr;    
    }

    if(key == p->data){
        return p;   
    }else if(key < p->data){
        return rSearch(p->lchild, key);    
    }else{
        return rSearch(p->rchild, key);     
    }

}  /* end of Treenode* BST::rSearch() */




int BST::height(Treenode *p){

    int x, y;    

    if(p == nullptr){
        return 0;   
    }

    x = height(p->lchild);   
    y = height(p->rchild);   

    return x > y ? x + 1 : y + 1;    

}  /* end of BST::height */



Treenode* BST::inorderPredecessor(Treenode *p){  

    while(p && p->rchild != NULL){
        p = p->rchild; 
    }

    return p;  

}  /* end of BST::inorderPredessor */


Treenode* BST::inorderSuccessor(Treenode *p){
    
    while(p && p->lchild != NULL){
        p = p->lchild;   
    }

    return p;    

}  /* end of BST::inorderSuccessor() */


Treenode* BST::Delete(Treenode *p, int key){
    Treenode *q;    

    if(p == nullptr){
        return nullptr;     
    }

    if(p->lchild == nullptr && p->rchild == NULL && p->data == key){
        if(p == root){
            root = nullptr;    
        }

        delete p;   
        return nullptr;    
    }

    if(key < p->data){
        p->lchild = Delete(p->lchild, key);    
    }else if(key > p->data){
        p->rchild = Delete(p->rchild, key);   
    }else{
        if(height(p->lchild) > height(p->rchild)){
            q = inorderPredecessor(p->lchild);   
            p->data = q->data;   
            p->lchild = Delete(p->lchild, q->data); 
        }else{
            q = inorderSuccessor(p->rchild);    
            p->data = q->data;    
            p->rchild = Delete(p->rchild, q->data);    

        }

    }

    return p;    

}  /* end of Treenode* BST::Delete() */



void BST::createFromPreorderTraversal(vector<int> vec){

    stack<Treenode*> stk;    

    Treenode *p, *t;   

    int i = 0;   

    root = new Treenode();   
    root->lchild = root->rchild = nullptr;    
    root->data = vec[i++];   

    p = root;    

    while(i < vec.size()){   

        if(vec[i] < p->data){
            t = new Treenode();    
            t->lchild = t->rchild = nullptr;    
            t->data = vec[i];
            i++;         
            p->lchild = t;    
            stk.push(p);
            p = t;    
            // cout << "left" << '\n';
        }else if(vec[i] > p->data && vec[i] < (stk.empty() ? 32767 : (stk.top())->data)){
            t = new Treenode();       
            t->lchild = t->rchild = nullptr;   
            t->data = vec[i];
            i++;      
            p->rchild = t; 
            p = t; 
            // cout << "right" << '\n';
        }else{
            p = stk.top();    
            stk.pop(); 
            // cout << "pop" << '\n';   
        }


    }  /* end of while(i < vec.size()) */

}  /* end of BST::createFromPreorderTraversal */



int BST::closestValueIterativeMethod(Treenode *p, int key){

    int closest_value = INT32_MAX;   
    int closest_number = -1;

    while(p != NULL){

        int diff = key - p->data;    
        diff = abs(diff);   

        if(closest_value > diff){
            closest_value = diff;
            closest_number = p->data;         
        } 

        if(closest_value == 0){
            return p->data;      
        }

        if(key > p->data){
            p = p->rchild;   
        }else if(key < p->data){
            p = p->lchild;    
        }

    }  /* end of while() */

    return closest_number;        

}  /* end of closestValueIterativeMethod */



int BST::closestValueRecursiveMethod(Treenode *p, int key){

    static int closest = INT32_MAX;    

    if(p == NULL){
        return closest;      
    }

    if(abs(key - closest) > abs(key - p->data)){    
        closest = p->data;   
    }

    if((key - p->data) == 0){
        return p->data;    
    }

    if(key > p->data){
        return closestValueRecursiveMethod(p->rchild, key);   
    }else if(key < p->data){
        return closestValueRecursiveMethod(p->lchild, key);     
    }else{
        return closest;    
    }


}  /* end of BST::closestValueRecursiveMethod() */


void BST::branchSums(Treenode *p, int runningSum, vector<int> &result){
    



}  /* end of branchSums() */



int main(){

    BST t; 

    vector<int> vec{10, 5, 2, 1, 6, 15, 13, 14, 22};          

    t.createFromPreorderTraversal(vec);    

    // t.insert(50); 
    // t.insert(10);
    // t.insert(20);
    // t.insert(30);
    // t.insert(60);   
    // t.insert(100);   

    cout << "\nInorder display\n";  /* expected output 10, 20, 30, 50, 60 */ 
    t.inorderDisplay(t.root);       

    cout << "\nPreorder display\n";     
    t.preorderDisplay(t.root);           

    Treenode *temp = t.search(30);      
    if(temp){
        cout << "\nData found " << temp->data << '\n';
    }else{
        cout << "\nSearch data not found\n";
    } 

    cout << "\nClosest value Iterative method " << t.closestValueIterativeMethod(t.root, 12) << '\n';              

    cout << "\nClosest value recursive method " << t.closestValueRecursiveMethod(t.root, 12) << '\n';   

    return 0;      

}  /* end of main()  */


