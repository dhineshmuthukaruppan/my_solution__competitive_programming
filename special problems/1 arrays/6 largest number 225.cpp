#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;    


bool comparator(int i, int j){

    // generate 2 numbers x and y.
    // x = IJ
    // Y = JI

    int x, y;   

    string str1 = to_string(i);   
    string str2 = to_string(j);    


    string str3 = str1 + str2;    
    string str4 = str2 + str1;   

    x = stoi(str3);  
    y = stoi(str4);     

    return x > y;    

}  /* end of comparator() */


int main(){

    vector<int> vec {3, 30, 34, 5, 9};   

    sort(vec.begin(), vec.end(), comparator);    

    for(int i=0; i<vec.size(); i++){
        cout << vec[i];    
    }


    return 0;   

}  /* end of main() */




/* editorial alternative

bool mycompare(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0?1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr(A.size());
    int count=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]==0)
            count++;
        arr[i]=to_string(A[i]);
    }
    if(count==A.size())
        return "0";
    sort(arr.begin(),arr.end(),mycompare);

    string result;   
    for (int i = 0; i < arr.size(); i++) {
        result += arr[i];
    }

    int pos = 0;    
    while(result[pos] == '0' && pos + 1 < result.size()){
        pos++
    }

    return result.substr(pos);    
    
}





 */



/* my partial answer
using namespace std;    

bool comparator(int i, int j){

    // generate 2 numbers x and y.
    // x = IJ
    // Y = JI

    int x, y;   

    string str1 = to_string(i);   
    string str2 = to_string(j);    


    string str3 = str1 + str2;    
    string str4 = str2 + str1;   

    stringstream ss1 (str3);  
    stringstream ss2 (str4);   
    
    ss1 >> x;   
    ss2 >> y;    

    // x = stoi(str3);  
    // y = stoi(str4); 
    
    return x > y;    

} 


string Solution::largestNumber(const vector<int> &A) {
    
    vector<int> B = A;    
    
    sort(B.begin(), B.end(), comparator);   
    

    string str = "";    
    for(int i : B){
        string str1;  
        stringstream ss; 
        ss << i;   
        ss >> str1;   
        str += str1;    
    }
    
    bool zerosRemoved = false;   
    int i = 0;    
    while(i < str.size() - 1){
        if(str[0] == '0' && zerosRemoved == false){   
            str.erase(str.begin() + 0);    
        }else{
            zerosRemoved = true;   
            break;    
        }
    }
    return str;    
    
}


 */