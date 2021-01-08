#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

    int spaces = n-1;   
    for(int i=0; i<n; i++){
        
        for(int j=0; j<spaces; j++){
            cout << " ";    
        }
        
        int hashes = n - spaces;     
        for(int j=0; j<hashes; j++){
            cout << "#";    
        }
        cout << endl;    
            
        spaces--;      
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
