#include <iostream>
#include <queue>

using namespace std;   

class Treenode{
    public:
        Treenode *lchild; 
        Treenode *rchild; 
        int data;    

};  

class Tree{

    public:
        Treenode *root;    

        Tree(){
            root = NULL; 
        }
        ~Tree(){
            cout << "\ndestructor called \n";
            
        }

        void createTree(); 
        void preorder(Treenode *p);    
        void inorder(Treenode *p); 
        void postorder(Treenode *p); 
        void levelorder(Treenode *p);       
        void heightOfTree();     

};  /* end of class Tree */


void Tree::createTree(){

    Treenode *p, *t; 
    int x; 
    queue<Treenode*> q; 

    root = new Treenode(); 
    root->lchild = root->rchild = NULL; 
    cout << "Enter root data "; 
    cin >> x;    
    root->data = x; 

    q.push(root);    

    while(!q.empty()){
        p = q.front(); 
        q.pop(); 

        cout << "\nEnter left child of " << p->data << " "; 
        cin >> x; 
        if(x != -1){
            t = new Treenode();  
            t->lchild = t->rchild = NULL;    
            t->data = x; 

            p->lchild = t; 
            q.push(t);      
        }

        cout << "\nEnter right child of " << p->data << " ";
        cin >> x; 
        if(x != -1){
            t = new Treenode(); 
            t->lchild = t->rchild = NULL;
            t->data = x; 

            p->rchild = t; 
            q.push(t);      
        }

    }

}  /* end of Tree::createTree() */ 



void Tree::preorder(Treenode *p){    

    if(p){
        cout << p->data << " ";   
        preorder(p->lchild);   
        preorder(p->rchild);      
    }

}  /* Tree::preorder(Treenode *p) */


void Tree::inorder(Treenode *p){
    if(p){
        inorder(p->lchild);   
        cout << p->data << " ";   
        inorder(p->rchild);       
    }

}  /* end of Tree::inorder() */


void Tree::postorder(Treenode *p){
    if(p){
        postorder(p->lchild);   
        postorder(p->rchild);  
        cout << p->data << " ";      
    }

}  /* END OF Tree::postorder() */


void Tree::levelorder(Treenode *p){
    queue<Treenode*> q;   

    if(p){
        cout << p->data << " ";     
        q.push(p); 
    }

    while(!q.empty()){
        p = q.front();    
        q.pop(); 

        if(p->lchild){
            cout << p->lchild->data << " ";   
            q.push(p->lchild);       
        }

        if(p->rchild){
            cout << p->rchild->data << " ";   
            q.push(p->rchild);           

        }
    }

}  /* end of Tree::levelorder() */



int main(){

    Tree t;   
    t.createTree();   
    cout << "\npreorder traversal \n"; 
    t.preorder(t.root);       
    cout << "\npostorder traversal \n";
    t.postorder(t.root);   
    cout << "\nInorder traversal \n";   
    t.inorder(t.root);    
    cout << "\nlevel order traversal \n";   
    t.levelorder(t.root);      


    return 0;

}  /* END OF main() */




