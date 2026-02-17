#include<bits/stdc++.h>
using namespace std;

vector<int, int> TwoSum(vector<int> &arr, int target, int n){
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int rem = target - arr[i];
        int j = 0;
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem], i},
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main(){
    vector<int> arr = {2,6,5,8,11};
    int n = arr.size();
    
    int target;
    cout << "Enter the Target: ";
    cin >> target;
    
    vector<int> result = TwoSum(arr, target, n);

    if (result.first == -1)
        cout << "No valid pair found.\n";
    else
        cout << "Indices: " << result.first << ", " << result.second << endl;

    return 0;
}