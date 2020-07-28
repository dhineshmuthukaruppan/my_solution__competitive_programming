#include <iostream>


using namespace std;    

class Treenode{
    public:
        Treenode *lchild;   
        Treenode *rchild;   
        int data; 
        int height;    
};



class AVL{
    public:
        Treenode *root;    

        AVL(){root = nullptr; }; 
        ~AVL();   

        int nodeHeight(Treenode *p);      
        int balanceFactor(Treenode *p);      
        Treenode* rInsert(Treenode *p, int key);   
        Treenode* rrRotation(Treenode *p);  
        Treenode* llRotation(Treenode *p);    
        Treenode* lrRotation(Treenode *p);    
        Treenode* rlRotation(Treenode *p);              
        void inOrder(Treenode *p);    
        void preOrder(Treenode *p); 
        

};  


AVL::~AVL(){
    cout << "destructor called \n";   
}



int AVL::nodeHeight(Treenode *p){

    int hl, hr;   

    hl = p && p->lchild ? p->lchild->height : 0;   
    hr = p && p->rchild ? p->rchild->height : 0;  

    return hl > hr ? hl + 1 : hr + 1; 

}  /* end of nodeHeight() */


int AVL::balanceFactor(Treenode *p){    

    int hl, hr;   

    hl = p && p->lchild ? p->lchild->height : 0;   
    hr = p && p->rchild ? p->rchild->height : 0;   

    return hl - hr;    

}  /* end of AVL::balanceFactor */



Treenode* AVL::rInsert(Treenode *p, int key){
    Treenode *t;    

    if(p == nullptr){
        t = new Treenode();   
        t->lchild = t->rchild = nullptr;   
        t->data = key;   
        t->height = 1; 
        if(this->root == nullptr){
            this->root = t;   
        }

        return t;           
    }    


    if(key < p->data){
        p->lchild = rInsert(p->lchild, key);    

    }else if(key > p->data){
        p->rchild = rInsert(p->rchild, key);     
    }else{
        return p;    
    }


    p->height = nodeHeight(p);    

    if(balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1){
        // lrRotation
        return lrRotation(p);      

    }else if(balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1){
        // ll rotation
        return llRotation(p);      

    }else if(balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1){
        // rrRotation
        return rrRotation(p);      

    }else if(balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1){
        // rl rotation
        return rlRotation(p); 

    }


    return p;    


}  /* end of rInsert() */



Treenode* AVL::rrRotation(Treenode *p){    

    cout << "rr rotation happened for data " << p->data << '\n';        
    
    Treenode *pr = p->rchild;   

    p->rchild = pr->lchild;    
    pr->lchild = p;   

    p->height = nodeHeight(p);   
    pr->height = nodeHeight(pr);     

    if(root == p){
        root = pr;    
    }

    return pr;   

}  /* end of rrRotation() */



Treenode* AVL::llRotation(Treenode *p){
    cout << "ll rotation happened for data " << p->data << '\n';        

    Treenode *pl = p->lchild;    

    p->lchild = pl->rchild; 
    pl->rchild = p;    

    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);

    if(root == p){
        root = pl;   
    }  

    return pl;    

}  /* end of AVL::llRotation() */



Treenode* AVL::lrRotation(Treenode *p){
    cout << "lr rotation happened for data " << p->data << '\n';      

    Treenode *pl = p->lchild;   
    Treenode *plr = p->lchild->rchild;    

    p->lchild = plr->rchild;   
    pl->rchild = plr->lchild;   

    plr->lchild = pl;    
    plr->rchild = p;   

    p->height = nodeHeight(p);   
    pl->height = nodeHeight(pl);    
    plr->height = nodeHeight(plr);   

    if(root == p){
        root = plr;    
    }

    return plr;    

}  /* end of lrRotation */


Treenode* AVL::rlRotation(Treenode *p){
    cout << "rl rotation happened for data " << p->data << '\n';         

    Treenode *pr = p->rchild;   
    Treenode *prl = p->rchild->lchild;   

    p->rchild = prl->lchild;   
    pr->lchild = prl->rchild;   


    prl->lchild = p;   
    prl->rchild = pr;    


    p->height = nodeHeight(p);   
    pr->height = nodeHeight(pr);   
    prl->height = nodeHeight(prl);     

    if(root == p){
        root = prl;     
    }

    return prl;     

}  /* end of AVL::rlRotation() */


void AVL::inOrder(Treenode *p){

    if(p){   
        inOrder(p->lchild);   
        cout << p->data << " ";
        inOrder(p->rchild);      
    }

}  /* end of AVL::inOrder() */


void AVL::preOrder(Treenode *p){
    if(p){
        cout << p->data << " "; 
        preOrder(p->lchild);  
        preOrder(p->rchild);  
    }

}  /* end of preOrder() */



int main(){

    AVL t;    

    t.rInsert(t.root, 10);   

    t.rInsert(t.root, 20);  
    t.rInsert(t.root, 30);
    t.rInsert(t.root, 25);  
    t.rInsert(t.root, 28);   
    t.rInsert(t.root, 27);   
    t.rInsert(t.root, 5);   


    cout << "preorder traversal \n";  // 25, 10, 5, 20, 28, 27, 30
    t.preOrder(t.root); 
    cout << '\n';      

    return 0;   

}  /* end of main() */    