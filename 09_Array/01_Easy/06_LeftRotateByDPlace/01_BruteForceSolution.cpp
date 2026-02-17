#include<bits/stdc++.h>
using namespace std;

int LeftRotatebyD(int arr[], int n, int d){
    d = d % n;

    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    //Shifting elements by d
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    //Put Back Temp in the last
    int j = 0;
    for(int i=n-d; i<n; i++){
        arr[i] = temp[j];
        j++;
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

    LeftRotatebyD(arr,n,d);

    return 0;
}