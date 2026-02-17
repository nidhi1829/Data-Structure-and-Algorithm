#include<bits/stdc++.h>
using namespace std;

vector<int> MajorityElement(int n, vector<int> &arr){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) cnt++;
        }
        if(cnt > n/2) return {arr[i]};
    }
    return {-1};
}

int main(){
    vector<int> arr = {2,2,3,3,1,2,2};
    int n = arr.size();

    vector<int> result = MajorityElement(n , arr);
    cout << result[0];

    return 0;
}