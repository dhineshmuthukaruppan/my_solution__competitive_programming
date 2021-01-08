#include<bits/stdc++.h>
#include<vector>
#include<map>


using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> result; 

    map<string, int> mp; 

    for(int i=0; i<strings.size(); i++){
        
        auto it1 = mp.find(strings[i]);     
        if(it1 != mp.end()){
            // found    
            // cout << "already found with value: " << mp[strings[i]] << endl;       
            it1->second = it1->second + 1;  
            // cout << strings[i] << " incrementing" << endl; 

        }else{
            // not found
            mp[strings[i]] = 1;    
            // cout << strings[i] << " not found" << endl; 
        }
    }

    // auto it = mp.begin(); 
    // while(it != mp.end()){
    //     cout  << it->first << " : " << it->second << endl; 
    //     it++;     
    // }           

    for(int i=0; i<queries.size(); i++){
        
        if(mp.find(queries[i]) != mp.end()){
            // found
            result.push_back(mp[queries[i]]);    

        }else{
            // not found
            result.push_back(0);    
        }
    }

    return result; 

}  // matching strings


int main()
{


    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i];

        if (i != res.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}
