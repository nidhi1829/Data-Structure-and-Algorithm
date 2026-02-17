#include<bits/stdc++.h>
using namespace std;

int LongestSumArrayWithSumK(vector <int> arr, long long k){
    int n = arr.size();
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        preSumMap[sum] = i;
    }
    return;
}
    
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k;
    cout << "Enter The sum k:";
    cin >> k;

    LongestSumArrayWithSumK(arr,k);

    return 0;
}