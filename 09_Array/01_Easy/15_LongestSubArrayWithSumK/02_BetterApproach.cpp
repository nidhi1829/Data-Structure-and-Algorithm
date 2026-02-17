#include<bits/stdc++.h>
using namespace std;

int LongestSumArrayWithSumK(vector <int> &arr, long k){
    int n = arr.size();
    int len = 0;

    for(int i = 0; i < n; i++){
        long long sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main(){

    vector <int> arr = {1,2,3,1,1,1,1,4,2,3};
    long long k;
    cout << "Enter The sum k:";
    cin >> k;

    int len = LongestSumArrayWithSumK(arr, k);
    cout << "The Length of the longest subarray is: " << len << endl;

    return 0;
}