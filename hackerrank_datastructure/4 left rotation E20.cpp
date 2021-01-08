#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split_string(string);

void leftRotateAndPrint(int n, int d, const vector<int> &a){
    vector<int> temp(n);   

    for(int i=0; i<n; i++){
        int shifter = d;
        int pos = i; 
        
        if((pos - shifter) < 0){
            shifter = shifter - pos; 
            pos = n - shifter ; 
        }else{
            pos = pos - shifter;   
        }  

        temp[pos] = a[i]; 

    } // end of for i loop 

    for(int i=0; i<n; i++){
        cout << temp[i] << " ";   
    }
    
}  /* end of leftRotateAndPrint() */

int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    leftRotateAndPrint(n, d, a); 


    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
