#include<bits/stdc++.h>
using namespace std;

int FirstLargest(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int SecondLargest(vector<int> &arr, int n,int Large){
    int SecondLarge;
    for(int i=n-2; i>0; i--){
        if(arr[i] != Large){
            int SecondLarge = arr[i];
            break;
        }
    }
}

int main(){

    vector<int> arr = {12,12,1,2,34,5,6,7,7,1};
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    int Large = FirstLargest(arr);
    cout << "First Largest NUmber in arr is " << Large << endl;

    int Second = SecondLargest(arr,n,Large);
    cout << "Second Largest Element in arr is " << Second << endl;

    return 0;
}