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


int solve(){


    return 0;   

}  /* end of solve() */


bool willMeet(int bigger, int smaller, int j, int i){

    // cout << bigger << " " << smaller << " " << j << " " << i << '\n';      
    bool answer=false;    

    forn(x, INT32_MAX){             
        j+=bigger;       
        i+=smaller;   

        if(i == j){
            answer = true;   
            break;     
        }else if(j > i){    
            break;    
        }    

    }  /* end of forn */

    // cout << " " << answer << '\n';    
    return answer;        

}  /* end of willMeet */


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  


    // int t, n;   
    // cin >> t;   
    // while(t--){

    //     cin >> n;    
    //     vi a(n+1);   
    //     for(int i=1; i<=n; i++){
    //         cin >> a[i];   
    //     }

    //     int bestcase = INT32_MAX; int worstcase = INT32_MIN;   

    //     for(int i=1; i<=n; i++){

    //         int currentTotal = 1;   
            
    //         for(int j=1; j<i; j++){
    //             if(a[j] > a[i]){
    //                 bool meetsCondition = willMeet(a[j], a[i], j, i);    
    //                 if(meetsCondition){
    //                     currentTotal++;    
    //                 }    
    //             }
    //         }

    //         for(int j=i+1; j<=n; j++){
    //             if(a[i] > a[j]){ 
    //                 bool meetsCondition = willMeet(a[i], a[j], i, j);    
    //                 if(meetsCondition){
    //                     currentTotal++;   
    //                 }    
    //             }
    //         }

    //         // cout << currentTotal << '\n';        

    //         bestcase = min(bestcase, currentTotal);   
    //         worstcase = max(worstcase, currentTotal);     

    //     }  /* end of for i loop */

    //     cout << bestcase << " " << worstcase << '\n';      
        
    // }  /* end of while loop */


    int t, n;   
    cin >> t;  
    while(t--){
        unordered_map<int, int> hmapFront, hmapBack;        
        int bestcase=INT32_MAX; int worstcase = INT32_MIN;       
    
        cin >> n;         
        vi a(n); 

        int velocityMax = INT32_MIN;    
        forn(i, n){
            cin >> a[i];    
            hmapFront[a[i]]++;  
            velocityMax = max(velocityMax, a[i]);     
        } 
        
        // calculating worst case and best case
        forn(i, n){    
            hmapBack[a[i]]++;    
            if(hmapFront[a[i]] > 0){  
                hmapFront[a[i]]--;
            }
            int currentTotal = 1;       
            
            if(a[i] < velocityMax){    
                for(int j=a[i]+1; j<=velocityMax; j++){
                    currentTotal += hmapBack[j];       
                }
            }
            
            forn(j, a[i]){
                currentTotal+= hmapFront[j];
            }

            // cout << currentTotal << '\n';      

            bestcase = min(bestcase, currentTotal);   
            worstcase = max(worstcase, currentTotal);     
        }

        cout << bestcase << " " << worstcase << '\n';        

    }  /* end of while loop */

    return 0;   

}  /* end of main() */


/* test cases
4
3
1 2 3
3
3 2 1
3
0 0 0
3
1 3 2




 */


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










