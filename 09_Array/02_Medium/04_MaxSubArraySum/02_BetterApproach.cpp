#include<bits/stdc++.h>
using namespace std;

int MaxSubArrSum(vector<int> arr, int n){
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            maximum = max(sum, maximum);
        }
    }
    return maximum;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = arr.size();

    int result = MaxSubArrSum(arr, n);
    cout << result;

    return 0;
}