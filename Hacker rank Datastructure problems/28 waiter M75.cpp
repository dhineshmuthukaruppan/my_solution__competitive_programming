/* input and output 
input
47 21
80 37 86 79 8 39 43 41 15 33 30 15 45 55 61 74 49 49 20 66 77 19 85 44 81 82 27 5 36 83 91 45 39 44 19 44 71 49 8 66 81 40 29 60 35 31 44

output
80
86
8
30
74
20
66
44
82
36
44
44
8
66
40
60
44
81
39
45
27
81
45
15
33
15
39
55
85
5
35
49
91
77
49
49
19
19
29
31
37
41
43
61 

*/    



#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the waiter function below.
 */
vector<int> waiter(vector<int> number, int q) {
    /*
     * Write your code here.
     */

    vector<int> returnvec;    

    vector<int> primes; 
    primes.push_back(2);
    primes.push_back(3);    

    for(int i=5; i<=10000; i++){

        if(i % 2 == 0){
            continue; 
        }

        bool condition = true;   
        
        for(int j=2; j<=sqrt(i); j++){
            if(i % j == 0){
                condition = false; 
                break; 
            }else{
                continue;    
            }
        }

        if(condition){
            primes.push_back(i);    
        }
    }


    stack<int> stack1, stack2, stack3; 

    vector<int>::iterator it;   
    it = number.begin();   
    while(it != number.end()){
        stack1.push(*it);
        it++;  
    }

    for(int i=0; i<q; i++){      

        if(stack1.empty()){
            break; 
        }

        while(!stack1.empty()){
            int number = stack1.top();   
            if(number % primes[i] == 0){
                stack2.push(number); 
            }else{
                stack3.push(number);     
            }
            stack1.pop(); 
        }

        while(!stack2.empty()){
            returnvec.push_back(stack2.top()); 
            stack2.pop(); 
        }     

        stack1 = stack3; 

        while(!stack3.empty()){
            stack3.pop(); 
        }

    }  /* loop through q iterations */

    // cout << "stack1 size at the end = " << stack1.size() << '\n'; 

    while(!stack1.empty()){    
        returnvec.push_back(stack1.top());
        // cout << stack1.top() << '\n';    
        stack1.pop();      
    }


    return returnvec;   

}  /* end of waiter() */



int main()
{

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    string number_temp_temp;
    getline(cin, number_temp_temp);

    vector<string> number_temp = split_string(number_temp_temp);

    vector<int> number(n);

    for (int number_itr = 0; number_itr < n; number_itr++) {
        int number_item = stoi(number_temp[number_itr]);

        number[number_itr] = number_item;
    }

    vector<int> result = waiter(number, q);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        cout << result[result_itr];

        if (result_itr != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

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
