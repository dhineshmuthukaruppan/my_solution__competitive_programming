#include <iostream>
#include <queue>
#include <stack>

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
        void iterativePreorder(Treenode *p);       
        void inorder(Treenode *p); 
        void iterativeInorder(Treenode *p);    
        void postorder(Treenode *p); 
        void iterativePostorder(Treenode *p);    
        void levelorder(Treenode *p);       
        int heightOfTree(Treenode *p);   
        int countNodes(Treenode *p);   
        int countNodesWithDegree2(Treenode *p);     
        int countLeafNodes(Treenode *p);     

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


void Tree::iterativePreorder(Treenode *p){

    stack<Treenode*> stk;     

    while(p != NULL || !stk.empty()){
        
        if(p != NULL){
            cout << p->data << " ";   
            stk.push(p);   
            p = p->lchild;    
        }else{
            p = stk.top(); 
            stk.pop(); 
            p = p->rchild; 
        }

    }

}  /* END OF Tree::iterativePreorder() */



void Tree::inorder(Treenode *p){
    if(p){
        inorder(p->lchild);   
        cout << p->data << " ";   
        inorder(p->rchild);       
    }

}  /* end of Tree::inorder() */


void Tree::iterativeInorder(Treenode *p){    

    stack<Treenode*> stk; 

    while(p!=NULL || !stk.empty()){
        if(p != NULL){
            stk.push(p);   
            p = p->lchild;     
        }else{
            p = stk.top();   
            stk.pop();   
            cout << p->data << " ";  
            p = p->rchild;   
        }

    }

}  /* end of Tree::iterativeInorder() */



void Tree::postorder(Treenode *p){
    if(p){
        postorder(p->lchild);   
        postorder(p->rchild);  
        cout << p->data << " ";      
    }

}  /* END OF Tree::postorder() */


void Tree::iterativePostorder(Treenode *p){

    stack<Treenode*> stk1, stk2;   

    stk1.push(p);   

    while(!stk1.empty()){
        p = stk1.top(); 
        stk1.pop(); 

        stk2.push(p);   

        if(p->lchild){
            stk1.push(p->lchild); 
        } 

        if(p->rchild){
            stk1.push(p->rchild); 
        }
    }


    while(!stk2.empty()){   
        p = stk2.top(); 
        stk2.pop(); 
        cout << p->data << " ";   
    }
    
}  /* end of Tree::iterativePostorder() */


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


int Tree::heightOfTree(Treenode *p){    

    int x; 
    int y; 

    if(!p){
        return 0;    
    }

    x = heightOfTree(p->lchild);  
    y = heightOfTree(p->rchild);    

    if(x > y){  
        return x+1;    
    }else{
        return y+1; 
    }

}  /* end of Tree::heightOfTree() */


int Tree::countNodes(Treenode *p){     
    
    int x, y; 
    
    if(p != NULL){
        x = countNodes(p->lchild);    
        y = countNodes(p->rchild);      

        return x + y + 1; 

    }

    return 0;  

}  /* end of Tree::countNodes() */


int Tree::countNodesWithDegree2(Treenode *p){     

    int x, y; 

    if(p != NULL){
        x = countNodesWithDegree2(p->lchild);   
        y = countNodesWithDegree2(p->rchild);        

        if(p->lchild && p->rchild){
            return x + y + 1; 
        }else{
            return x + y; 
        }

    }

    return 0;   

}  /* end of Tree::countNodesWithDegree2() */


int Tree::countLeafNodes(Treenode *p){ 
    int x, y; 

    if(p != NULL){
        x = countLeafNodes(p->lchild);
        y = countLeafNodes(p->rchild);    

        if(p->lchild == NULL && p->rchild == NULL){
            return x + y + 1; 
        }else{
            return x + y; 
        }
    }

    return 0;  

}  /* end of Tree::countLeafNodes */




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

    cout << "\nIterative preorder \n";
    t.iterativePreorder(t.root);     

    cout << "\nIterative inorder traversal\n"; 
    t.iterativeInorder(t.root);

    cout << "\nIterative Post order traversal\n";   
    t.iterativePostorder(t.root);     
    
    cout << "\nHeight of tree \n" << t.heightOfTree(t.root);    

    cout << "\ncount nodes\n" << t.countNodes(t.root);    
    
    cout << "\ncount nodes with degree 2\n" << t.countNodesWithDegree2(t.root);   

    cout << "\ncount leaf nodes\n" << t.countLeafNodes(t.root);    

    return 0;

}  /* END OF main() */




