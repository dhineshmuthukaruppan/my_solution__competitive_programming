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



void shiftAndUpdate(vector<int> &result, int number, int idx){

    for(int i=0; i<=idx; i++){
        if(i == idx){
            result[i] = number;    
        }else{
            result[i] = result[i+1];   
        }
    }


}  /* end of shiftAndUpdate() */



vector<int> threeLargestNumber(vector<int> array){

    vector<int> result(3, -INT32_MAX);    

    for(int i=0; i<array.size(); i++){

        if(result[2] == -INT32_MAX || array[i] > result[2]){
            // shift and update 
            shiftAndUpdate(result, array[i], 2);    

        }else if(result[1] == -INT32_MAX || array[i] > result[1]){
            // shift and update
            shiftAndUpdate(result, array[i], 1);    

        }else if(result[0] == -INT32_MAX || array[i] > result[0]){
            // shift and update
            shiftAndUpdate(result, array[i], 0);    

        }
        
    }  /* end of for i loop  */
    


    return result;    


}  /* end of threeLargestNumber */




int main(){

    vector<int> array {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7}; 

    vector<int> result = threeLargestNumberPriorityQueue(array);    

    cout << "Three largest number\n";   
    for(int i=0; i<result.size(); i++){
        cout << result[i] << ' ';
    }




    vector<int> array1 {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7}; 
    vector<int> result1 = threeLargestNumber(array1);    

    cout << "Three largest number\n";   
    for(int i=0; i<result1.size(); i++){
        cout << result1[i] << ' ';
    }



    return 0;  

}  /* end of main() */