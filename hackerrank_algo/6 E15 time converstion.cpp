#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     stringstream ss(s);       
     
     int hrs, mins, seconds;   
     char c;   
     string zone;   
     
     ss >> hrs;   
     ss >> c;   
     ss >> mins;   
     ss >> c;   
     ss >> seconds;    
     ss >> zone;   
     
     string result = "";       
     
     if(zone == "AM"){
         if(hrs == 12){
            result += "00:";   
         }else{
            if(hrs < 10){
                result += "0";
            }
            result += to_string(hrs); 
            result += ":"; 
         }
         

         if(mins < 10){
            result += "0";  
         }
         result += to_string(mins);   
         result += ":";
         
         if(seconds < 10){
            result += "0";  
         }
         
        result += to_string(seconds);         
         
     }else{
        if(hrs == 12){
            result += "12:";   
         }else{
            result += to_string(hrs+12);    
            result += ":";   
         }
         

         if(mins < 10){
            result += "0";  
         }
         result += to_string(mins);   
         result += ":";
         
         if(seconds < 10){
            result += "0";  
         }
         
         result += to_string(seconds);        
         
         
     } 
     
     return result;      
     
          
     

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
