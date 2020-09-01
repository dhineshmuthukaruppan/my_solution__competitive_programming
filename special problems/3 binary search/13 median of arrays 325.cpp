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

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)

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

typedef pair<int, int> pi; 
typedef pair<ll, ll> pl;   
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;   
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

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

/* For a number to be median, there should be exactly n/2 numbers which are less than this number */

double solve(vi &a, vi &b){

    sort(a.begin(), a.end());   
    sort(a.begin(), a.end()); 

    int n = a.size();
    int m = b.size();   

    if(n == 0){
        // return b's median
        if(m % 2 == 1){
            return b[m/2];    
        }else{      
            return static_cast<double>(b[m/2] + b[(m/2)-1]) /2; 
        }

    }else if(m == 0){
        // return n's median
        if(n % 2 == 1){
            return a[n/2];    
        }else{ 
            return static_cast<double>(a[n/2] + a[(n/2)-1] ) /2; 
        }       

    }


    int min_e, max_e;    
    min_e = min(a[0], b[0]);  
    max_e = max(a[n-1], b[m-1]);   
    
    int answer = min_e;       
    int smallerElementsCount = (n + m) / 2;    
    
    while(min_e <= max_e){           
        int mid = (min_e + max_e) / 2;   

        int matchedSmallerElements = 0;  
        
        matchedSmallerElements += upper_bound(a.begin(), a.end(), mid-1) - a.begin();       
        matchedSmallerElements += upper_bound(b.begin(), b.end(), mid-1) - b.begin();     

        int countOfMid = 0;   
        countOfMid += count(a.begin(), a.end(), mid);    
        countOfMid += count(b.begin(), b.end(), mid);   

        cout << "mid " << mid << " min " << min_e  << " max " << max_e << " count of mid " << countOfMid <<  '\n';   
        cout << "matched smaller elements " << matchedSmallerElements << '\n';   

        
        if(matchedSmallerElements < smallerElementsCount && matchedSmallerElements + countOfMid > smallerElementsCount){ 
            answer = min_e;       
            min_e = mid +1; 
        }else if(matchedSmallerElements < smallerElementsCount && matchedSmallerElements + countOfMid == smallerElementsCount){
            answer = min_e;        
            min_e = mid+1;    
        }else if(matchedSmallerElements <= smallerElementsCount){  
            answer = min_e;         
            min_e = mid + 1;              
        }else if(matchedSmallerElements > smallerElementsCount){    
            max_e = mid-1;              
        }

    }  /* end of min < max */

    return answer;          

}  /* end of solve() */



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    // vi a {1, 4, 5};  
    // vi b {2, 3};  

    vi a { -40, -25, 5, 10, 14, 28, 29, 48}; 
    vi b {-48, -31, -15, -6, 1, 8 };     
    double result = solve(a, b); 
    cout << result;       

    return 0;   

}  /* end of main() */






template <class A, class B>
ostream& operator << (ostream &out, const pair<A, B> &a){
    return out << "(" << a.x << ", " << a.y << ")";   
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











