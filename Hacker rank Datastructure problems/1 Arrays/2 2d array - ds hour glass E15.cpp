#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int result = -32768000;   

    for(int i=0; i<arr.size() - 2; i++){  // iterate through rows
        for(int j=0; j<arr[0].size() - 2; j++){ // iterate through columns
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]; 

            if(sum > result){
                result = sum; 
            } 
        }
    }
    
    return result; 

} // end of hourglassSum

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);

    // [[column...], [column...], ]
    for (int i = 0; i < 6; i++) {  // row
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {  // column
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
