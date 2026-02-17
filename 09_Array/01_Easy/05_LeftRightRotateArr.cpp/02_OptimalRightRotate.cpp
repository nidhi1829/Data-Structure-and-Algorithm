#include<bits/stdc++.h>
using namespace std;

int RightRotate(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    cout << "After Right Rotate" << endl;
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

    cout << "Before Right Rotate " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    RightRotate(arr,n);

    return 0;
}