#include<bits/stdc++.h>
using namespace std;

pair<int, int> TwoSum(int n, vector<int> &arr, int target){
    int left = 0; 
    int right = n - 1;
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return {left, right};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return {-1, -1};
}

int main(){
    vector<int> arr = {2,6,5,8,11};
    int n = arr.size();
    
    int target;
    cout << "Enter the Target: ";
    cin >> target;
    
    pair<int, int> result = TwoSum(n ,arr, target);
    if(result.first == -1) {
        cout << "No valid pair found.\n";
    } else {
        cout << "Indices: " << result.first << ", " << result.second << "\n";
        cout << "Values: " << arr[result.first] << ", " << arr[result.second] << "\n";
    }

    return 0;
}