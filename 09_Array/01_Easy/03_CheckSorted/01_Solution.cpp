#include<bits/stdc++.h>
using namespace std;

bool CheckSort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;

    cout << "The arr is sorted: " << (CheckSort(arr,n) ? "Yes" : "No") << endl;
    
    return 0;
}