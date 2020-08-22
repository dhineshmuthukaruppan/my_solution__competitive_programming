/* Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons. */


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;    


int main(){

    vector<int> A {-2, 1, -4, 5, 3};    
    sort(A.begin(), A.end());    

    int ans = A[0] + A[A.size() - 1];      


    return 0;   

}  /* end of main() */




/* 

vector<int> find(vector<int> &A,int l,int r)
{       vector<int> v(2,0);
    if(l==r)
    {
        v[0]=v[1]=A[l];
        return v;
    }
    if(l+1==r)
    {
        v[0]=min(A[l],A[r]);
        v[1]=max(A[l],A[r]);
        return v;
    }
    int mid=l+(r-l)/2;
    vector<int> L = find(A,l,mid-1); 
    vector<int> R =find(A,mid,r);
    v[0]=min(L[0],R[0]);
    v[1]=max(L[1],R[1]);
    return v;
    
    
}

 */