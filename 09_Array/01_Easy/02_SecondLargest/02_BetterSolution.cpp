#include<bits/stdc++.h>
using namespace std;

int FirstLargest(vector <int> &arr, int n){
    int Large = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > Large){
            Large = arr[i];
        }
    }
    return Large;
}

int SecondLargest(vector<int> &arr, int n, int FLarge){
    int sLarge = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>sLarge && arr[i]!= FLarge){
            sLarge = arr[i];
        }
    }
    return sLarge;
}

int main(){
    vector<int> arr = {12,12,1,2,34,5,6,7,7,1};
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    int FLarge = FirstLargest(arr,n);
    cout << "The First Largest Element in arr is " << FLarge << endl;
    cout << "The First Second Largest Element in arr is " << SecondLargest(arr,n,FLarge) << endl;


    return 0;
}