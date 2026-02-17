#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm

int MaxSubArrSum(vector<int> arr, int n){
    int ansStart = 0;
    int ansEnd = 0;
    int start = 0;
    int CurrSum = 0;
    int maximum = INT_MIN;

    for(int i = 0; i < n; i++){
        CurrSum += arr[i];
    
        if(CurrSum > maximum){
            maximum = CurrSum;
            ansStart = start;
            ansEnd = i;
        }
        if(CurrSum < 0){
            CurrSum = 0;
            start = start + 1;
        }
    }
    cout << "Maximum Subarray is from index " << ansStart << " to " << ansEnd << endl;
    return maximum;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = arr.size();

    int result = MaxSubArrSum(arr, n);
    cout << result;

    return 0;
}