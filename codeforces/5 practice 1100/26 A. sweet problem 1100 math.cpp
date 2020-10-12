// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠁⠀⠀⠀⠀⠀⠀⠈⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⣸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⣿⣿⡇⠀⢀⣀⣤⣤⣤⣤⣀⡀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣔⢿⡿⠟⠛⠛⠻⢿⡿⣢⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⣀⣤⣶⣾⣿⣿⣿⣷⣤⣀⡀⢀⣀⣤⣾⣿⣿⣿⣷⣶⣤⡀⠀⠀⠀⠀
// ⠀⠀⢠⣾⣿⡿⠿⠿⠿⣿⣿⣿⣿⡿⠏⠻⢿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣷⡀⠀⠀
// ⠀⢠⡿⠋⠁⠀⠀⢸⣿⡇⠉⠻⣿⠇⠀⠀⠸⣿⡿⠋⢰⣿⡇⠀⠀⠈⠙⢿⡄⠀
// ⠀⡿⠁⠀⠀⠀⠀⠘⣿⣷⡀⠀⠰⣿⣶⣶⣿⡎⠀⢀⣾⣿⠇⠀⠀⠀⠀⠈⢿⠀
// ⠀⡇⠀⠀⠀⠀⠀⠀⠹⣿⣷⣄⠀⣿⣿⣿⣿⠀⣠⣾⣿⠏⠀⠀⠀⠀⠀⠀⢸⠀
// ⠀⠁⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⢇⣿⣿⣿⣿⡸⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠈⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠐⢤⣀⣀⢀⣀⣠⣴⣿⣿⠿⠋⠙⠿⣿⣿⣦⣄⣀⠀⠀⣀⡠⠂⠀⠀⠀
// ⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠋⠁⠀⠀⠀ 
// Author name : Dhinesh Muthukaruppan


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
#define newl '\n'

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
int gcdEuclidean(int A, int B);  
int lcm(int A, int B);      
ll lb(ll target, ll l, ll h);
ll ub(ll target, ll l, ll h);       
ll f(ll x){
    ll answer;    

    return answer;   
}


void solve(){

    ll t, n, m, l, r, w, x, y, z, k, temp, answer, mini, maxi, miniIndex, maxiIndex, counter, sum;  
    bool cond, parity;    
    string str, str1;                             
    cin >> t;               
    // t = 1;        
    while(t--){          

        cin >> x >> y >> z;    
        answer = 0;   
        if((x == y && y == z)){
            answer = ((2*(x/2)) + (x - ((x/2))));   
        }else if(x==y || y==z || z==x){
            if(x==y){
                if(x+y <=z){
                    answer = x+y;    
                }else{
                    answer = ((2*(z/2)) + (x - ((z/2))));   
                }

            }else if(y==z){
                if(y+z <= x){
                    answer = y+z;        
                }else{
                    answer = ((2*(x/2)) + (y - ((x/2))));   
                }
            }else if(z==x){
                if(z+x <= y){
                    answer = z+x;    
                }else{
                    answer = ((2*(y/2)) + (x - ((y/2))));   
                }

            }
        }else{

            ll bigger = max(max(x, y), z);    
            ll smaller = min(min(x, y), z);    
            
            ll other;   
            if(x!= bigger && x!= smaller){
                other = x; 
            }else if(y!=bigger && y!= smaller){
                other = y;   
            }else{
                other = z;    
            }

            if(bigger - other >= smaller){
                answer += smaller;  
                answer += other;    
            }else{
                answer += (bigger-other);  
                
                smaller -= (bigger - other);     
                bigger -= (bigger-other);     

                if(bigger+other <= smaller){
                    answer += bigger+other;    
                }else{
                    answer += ((2*(smaller/2)) + (bigger - ((smaller/2))));   
                }
            
            }

        }

        cout << answer << newl;     


        // if(cond){cout << "YES" << newl; }else{cout << "NO" << newl; }  

    }  /* end of while() */


}  /* end of solve() */



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    solve();      

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
    bool cond = true;   
    if(number <= 1){
        cond = false; 
    }else if(number == 2 || number == 3){
        cond = true; 
    }else{
        for(int i=2; i<= sqrt(number); i++){
            if(number % i == 0){
                cond = false; 
                break; 
            }else{
                continue; 
            }
        }
    }
    return cond;    
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



int gcdEuclidean(int A, int B){
    if(B == 0)
        return A;   
    return gcdEuclidean(B, A % B);       
}  /* end of gcdEuclidean() */  


int lcm(int A, int B){
    return (A*B) / gcdEuclidean(A, B);     
}  /* end of lcm */


ll lb(ll target, ll l, ll h){

    ll mid, fmid;   
    ll answer = INT64_MAX;        
    while(l <= h){    

        mid = (l + h)/2;   

        fmid = f(mid);    

        if(fmid >= target){
            h = mid - 1;    
            answer = min(answer, mid);    
        }else{
            l = mid +1; 
        } 

    }
    
    return answer;  

}  /* end of lb */


ll ub(ll target, ll l, ll h){

    ll mid, fmid;   
    ll answer = INT64_MAX;        
    while(l <= h){    

        mid = (l + h)/2;   

        fmid = f(mid);    

        if(fmid > target){    
            h = mid - 1;    
            answer = min(answer, mid);    
        }else{
            l = mid +1; 
        } 

    }
    
    return answer;  

}  /* end of ub */







