/* ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠁⠀⠀⠀⠀⠀⠀⠈⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⢀⣀⣤⣤⣤⣤⣀⡀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣔⢿⡿⠟⠛⠛⠻⢿⡿⣢⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣷⣤⣀⡀⢀⣀⣤⣾⣿⣿⣿⣷⣶⣤⡀⠀⠀⠀⠀
⠀⠀⢠⣾⣿⡿⠿⠿⠿⣿⣿⣿⣿⡿⠏⠻⢿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣷⡀⠀⠀
⠀⢠⡿⠋⠁⠀⠀⢸⣿⡇⠉⠻⣿⠇⠀⠀⠸⣿⡿⠋⢰⣿⡇⠀⠀⠈⠙⢿⡄⠀
⠀⡿⠁⠀⠀⠀⠀⠘⣿⣷⡀⠀⠰⣿⣶⣶⣿⡎⠀⢀⣾⣿⠇⠀⠀⠀⠀⠈⢿⠀
⠀⡇⠀⠀⠀⠀⠀⠀⠹⣿⣷⣄⠀⣿⣿⣿⣿⠀⣠⣾⣿⠏⠀⠀⠀⠀⠀⠀⢸⠀
⠀⠁⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⢇⣿⣿⣿⣿⡸⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠈⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠐⢤⣀⣀⢀⣀⣠⣴⣿⣿⠿⠋⠙⠿⣿⣿⣦⣄⣀⠀⠀⣀⡠⠂⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠁⠀⠀⠀ 

Author name : Dhinesh Muthukaruppan

Description (optional)
======================
*/

#include <iostream>  
#include <vector>  
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <cstring>
#include <cassert>
#include <complex>
#include <random>
#include <bitset>
#include <ctime>
#include <chrono>

using namespace std;    

#define forn(i, n) for(int i = 0; i < int(n); i++) 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)

#define pb push_back
#define mp make_pair
#define sqr(a) ((a) * (a))    
#define sz(a) int(a.size())     
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

typedef long long ll; 
typedef long double ld;    

typedef pair<int, int>  pi; 
typedef pair<ll, ll>    pl;   
typedef vector<int>	    vi;
typedef vector<ll>	    vl;
typedef vector<pi>	    vpi;   
typedef vector<pl>	    vpl;
typedef vector<vi>	    vvi;
typedef vector<vl>	    vvl;


template <class A, class B>
ostream& operator << (ostream &out, const pair<A, B> &a);

template <class A>
ostream& operator <<(ostream &out, const vector<A> &v);

void swap(int &a, int &b);
vi sieveOfEratosthenes(int n);  // O(n log logn)      
bool isPrime(int number);  // O(sqrt(n));  
vi returnAllFactors(int n);
int totalNumberOfDigits(int A);
int extractIthDigit(int A, int i);  /* Extract ith digit - (A / 10 ^ i) % 10 */
int reverseDigits(int A);
vi allPrimeFactors(int A);   // TODO   
int gcdByPrimeFactors(int A, int B); // TODO
int gcdByLoop(int A, int B);   
int gcdEuclidean(int A, int B);  


class Treenode{
    public:
        int data; 
        Treenode *lchild;    
        Treenode *rchild;    
};   


class BST{
    public:
        Treenode *root;   
        BST();
        ~BST();   
        void insert(int key);       
        Treenode* search(int key);    
        Treenode* Delete();     
        void createFromPreOrderTraversal(vi &a);     
        void preOrderTraversal(Treenode *p);      

};   

BST::BST(){
    root = nullptr;     

}  /* end of BST::BST() */


BST::~BST(){


}  /* END OF destructor */


void BST::insert(int key){

    Treenode *p, *t;   

    if(root == nullptr){
        t = new Treenode();   
        t->data = key; 
        t->lchild = t->rchild = nullptr;    

        root = t;    
        return;  
    }

    t = root;   

    while(t != nullptr){
        p = t;    

        if(key < p->data){
            t = t->lchild;   
        }else if(key >= p->data){
            t = t->rchild;   
        }

    }

    t = new Treenode();   
    t->data = key;    
    t->lchild = t->rchild = nullptr;    

    if(key < p->data){  
        p->lchild = t;    

    }else if(key >= p->data){
        p->rchild = t;    
    }   

}  /* end of insert() */

Treenode* BST::search(int key){   

    if(root == nullptr){
        return nullptr;    
    }

    Treenode *t = root;    

    while(t != nullptr){
        if(key < t->data){
            t = t->lchild;    
        }else if(key > t->data){
            t = t->rchild;    
        }else if(key == t->data){
            return t; 
        }
    }

    return nullptr;    

}  /* end of search() */

Treenode* Delete(){
    Treenode *p;    


    return p;    

}  /* end of Delete() */


void BST::createFromPreOrderTraversal(vi &a){

    stack<Treenode*> stk;    

    Treenode *p, *t;    
    int i=0;   

    root = new Treenode();   
    root->data = a[i++];   
    root->lchild = root->rchild = nullptr;    

    p = root;   

    while(i < a.size()){

        if(a[i] < p->data){
            t = new Treenode();   
            t->data = a[i++];   
            t->lchild = t->rchild = nullptr;    

            p->lchild = t;    
            stk.push(p);   
            p = p->lchild;   

        }else if(a[i] >= p->data && a[i] < (stk.empty() ? 32768 : (stk.top())->data)){
            t = new Treenode();    
            t->data = a[i++];   
            t->lchild = t->rchild = nullptr;    

            p->rchild = t;   
            p = p->rchild;    

        }else{
            p = stk.top();   
            stk.pop();    
        }

    }  /* end of while loop */

}  /* createFromPreOrderTraversal() */


void BST::preOrderTraversal(Treenode *p){
    
    if(p != NULL){
        cout << p->data << " ";  
        preOrderTraversal(p->lchild);  
        preOrderTraversal(p->rchild);     
    }

}  /* end of preOrderTraversal() */


bool validateBSTHelper(Treenode *t, int minValue, int maxValue){

    if(t == nullptr){         
        return true;    
    }else if(t->lchild == nullptr && t->rchild == nullptr){
        return true;    
    }else if(t->data < minValue || t->data >= maxValue ){
        return false;          
    }else{
        return validateBSTHelper(t->lchild, minValue, t->data) && validateBSTHelper(t->rchild, t->data, maxValue);       
    }

}  /* end of validateBSTHelper() */  



bool validateBST(Treenode* t){

    return validateBSTHelper(t, INT32_MIN, INT32_MAX);         

}  /* end of solve() */



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  


    BST t;   

    // vi a{10, 5, 2, 1, 5, 15, 13, 14, 22};  
    vi a{10, 10, 10, 10};       
    t.createFromPreOrderTraversal(a);          
    t.insert(25);   

    t.preOrderTraversal(t.root);    

    bool result = validateBST(t.root);       
    cout << "\nisBSTvalid " << result << '\n';     


    return 0;      

}  /* end of main() */






template <class A, class B>
ostream& operator << (ostream &out, const pair<A, B> &a){
    return out << "(" << a.first << ", " << a.second << ")";   
}

template <class A>
ostream& operator <<(ostream &out, const vector<A> &v){
    out << "["; 
    forn(i, sz(v)){
        if(i) out << ", "; 
        out << v[i];   
    }    
    return out << "]";   
}

void swap(int &a, int &b){    
    int temp;    
    temp = a;   
    a = b;   
    b = temp;   
}  /* end of swap() */

/* O(nloglogn) */
vi sieveOfEratosthenes(int n){
    vi primes(n+1, 1);   
    vi resultVector;     
    primes[0] = 0;  
    primes[1] = 0;   
    for(int i=2; i <= sqrt(n); i++){   
        if(primes[i] == 1){  
            for(int j = i * i; j <= n; j+=i){   
                primes[j] = 0;     
            }   
        }
    }
    for(int i=2; i<=n; i++){
        if(primes[i] == 1){
            resultVector.push_back(i);    
        }
    }
    return resultVector;   
}  /* end of sieveOfEratosthenes() */

// O(sqrt(n));  
bool isPrime(int number){
    bool condition = true;   
    if(number <= 1){
        condition = false; 
    }else if(number == 2 || number == 3){
        condition = true; 
    }else{
        for(int i=2; i<= sqrt(number); i++){
            if(number % i == 0){
                condition = false; 
                break; 
            }else{
                continue; 
            }
        }
    }
    return condition;    
}

vi returnAllFactors(int n){
    vi result;      
    for(int i=1; i<=sqrt(n); i++){ // this will be efficient than n or n/2
        if(n%i == 0){
            result.pb(i);  
            if(i != sqrt(n)){
                result.pb(n/i);     
            }
        }
    }
    sortall(result);    
    return result;   
}  /* end of returnAllFactors() */

int totalNumberOfDigits(int A){
    int result = 0;   
    while(A > 0){
        A = A / 10;   
        result++;   
    }    
    return result;    
}  /* end of totalNumberOfDigits() */

/* Extract ith digit - (A / 10 ^ i) % 10 */
int extractIthDigit(int A, int i){
    int result = (int(A / pow(10, i)) % 10);  
    return result;            
} /* end of extractIthDigit() */

int reverseDigits(int A){
    bool negative_number = false;    
    if(A < 0){
        negative_number = true;    
        A = A * -1;    
    }    
    long long reverse = 0;       
    int prev_reverse = 0;     
    while(A > 0){
        int current_digit = A % 10;   
        reverse = reverse * 10 + current_digit;      
        if((reverse - current_digit)/10 != prev_reverse){
            // overflowed
            return 0;   
        }
        prev_reverse = reverse;    
        A = A / 10;   

    }   
    if(negative_number && -reverse < INT32_MIN) return 0;   
    else if(reverse > INT32_MAX) return 0;   
    else return negative_number ? -reverse :reverse;        
}  /* end of reverse() */    

vi allPrimeFactors(int A){
    vi result;   

    return result;  
}  /* end of allPrimeFactors() */  

int gcdByPrimeFactors(int A, int B){
    int result;  

    return result;   
}  /* end of gcdByPrimeFactors() */

int gcdByLoop(int A, int B){
    A = (A > 0) ? A : -A;   
    B = (B > 0) ? B : -B;   
    while(A != B){
        if(A == 0) return B;   
        if(B == 0) return A;   
        if(A > B) A -= B;   
        else if(B > A) B-= A;   
    }
    return A;   
}  /* end of gcdByLoop() */

int gcdEuclidean(int A, int B){
    if(B == 0)
        return A;   
    return gcdEuclidean(B, A % B);       
}  /* end of gcdEuclidean() */  











