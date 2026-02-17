#include<bits/stdc++.h>
using namespace std;

int RightRotatebyD(int arr[], int n, int d){
    d = d % n;
    int k  = n - d;

    int temp[k];
    for(int i = 0 ; i< k; i++){
        temp[i] = arr[i];
    }

    for(int i = k ; i< n; i++){
        arr[i - k] = arr[i];
    }
    for(int i = 0; i < k; i++){
        arr[n-k+i] = temp[i];
    }

    cout << "After Rotating by d place" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
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

    RightRotatebyD(arr,n,d);

    return 0;
}