#include<bits/stdc++.h>
using namespace std;

pair<int,int> TwoSum(vector<int> &arr, int target, int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(i == j) continue;
            if(arr[i] + arr[j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main(){
    
    vector<int> arr = {1,2,37,3,4,0,13,4,5,2};
    int n = arr.size();
    
    int target;
    cout << "Enter the Target: ";
    cin >> target;
    
    pair<int, int> result = TwoSum(arr, target, n);

    if (result.first == -1)
        cout << "No valid pair found.\n";
    else
        cout << "Indices: " << result.first << ", " << result.second << endl;

    return 0;
}