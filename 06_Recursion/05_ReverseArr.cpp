#include<bits/stdc++.h>
using namespace std;

void Reverse(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    Reverse(l+1,r-1, arr);
}

int main(){
    
    int l,r;
    int n;
    cout << "Enter: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    Reverse(0,n-1,arr);
    for(int i=0; i<n; i++) cout << arr[i] << " ";


    return 0;
}