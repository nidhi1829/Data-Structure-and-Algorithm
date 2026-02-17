#include<bits/stdc++.h>
using namespace std;

int NumAppearsOnceNdOthersTwice(vector<int> arr){
    int n = arr.size();

    map<long long, int> mpp;
    
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second == 1){
            return it.first;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4};

    int result = NumAppearsOnceNdOthersTwice(arr);
    cout << result;

    return 0;
}