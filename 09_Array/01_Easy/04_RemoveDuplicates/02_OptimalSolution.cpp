#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicate(vector<int> &arr,int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){

    vector<int> arr = {12,12,12,43,112,113,222,244,244,444};
    int n = arr.size();
    
    cout << "Before Removing Duplicates:" << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k = RemoveDuplicate(arr,n); 

    cout << "After Removing Duplicates:" << endl;
    for (int i=0; i<k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}