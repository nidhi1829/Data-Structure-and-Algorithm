#include<bits/stdc++.h>
using namespace std;

vector<int> MajorityElement(int n, vector<int> &arr){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second > (n/2)){
            return {it.first};
        }
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