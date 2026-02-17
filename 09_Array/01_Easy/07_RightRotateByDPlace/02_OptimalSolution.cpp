#include<bits/stdc++.h>
using namespace std;

int LeftRotatebyD(int arr[], int n, int d){
   d = d % n;
   int k = n- d;
   reverse(arr,arr+k);
   reverse(arr+k,arr+n);
   reverse(arr,arr+n);
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;

    int d;
    cout << "Enter d: ";
    cin >> d;

    LeftRotatebyD(arr,n,d);
    for(int i=0; i<n; i++){
      cout << arr[i] << " ";
    }

    return 0;
}