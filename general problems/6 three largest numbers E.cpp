#include <iostream>
#include <queue>
#include <vector>


using namespace std;    


vector<int> threeLargestNumberPriorityQueue(vector<int> array){

    priority_queue<int, vector<int>, greater<int>> pq;     

    for(int i=0; i<array.size(); i++){
        if(i < 3){
            pq.emplace(array[i]); 
        }else{
            if(array[i] > pq.top()){
                pq.pop(); 
                pq.emplace(array[i]); 
            }
        }
    }

    vector<int> result;    
    while(!pq.empty()){
        result.push_back(pq.top());  
        pq.pop();      
    }

    return result;     

}  /* END OF threeLargestNumberPriorityQueue() */




int main(){

    vector<int> array {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7}; 

    vector<int> result = threeLargestNumberPriorityQueue(array);    

    cout << "Three largest number\n";   
    for(int i=0; i<result.size(); i++){
        cout << result[i] << ' ';
    }




    return 0;  

}  /* end of main() */