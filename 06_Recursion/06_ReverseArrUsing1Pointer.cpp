#include<bits/stdc++.h>
using namespace std;

void RArr(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    RArr(i+1,arr,n);
}

int main(){
    int n;
    cout << "Enter: "; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    RArr(0,arr,n);
    for(int  i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}