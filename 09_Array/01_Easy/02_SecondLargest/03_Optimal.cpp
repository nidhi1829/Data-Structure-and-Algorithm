#include<bits/stdc++.h>
using namespace std;

int sLargest(vector <int> &arr, int n){
    int Large = arr[0];
    int sLarge = -1;
    for(int i=1; i<n; i++){
        if(arr[i]>Large){
            sLarge = Large;
            Large = arr[i];
        }
        else if(arr[i]<Large && arr[i]>sLarge){
            sLarge = arr[i];
        }
    }
    return sLarge;
}

int sSmallest(vector<int> &arr, int n){
    int Smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[0]<Smallest){
            sSmallest = Smallest;
            Smallest = arr[i];
        }
        else if(arr[i]!=Smallest && arr[i]<sSmallest){
            sSamllest = arr[i];
        }
    }
}

int main(){
    vector<int> arr = {12,12,1,2,34,5,6,7,7,1};
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "The Second Largest Element is " << sLargest(arr,n) << endl;
    cout << "The Second Smallest Element is " << sSmallest(arr,n) << endl;

    return 0;
}