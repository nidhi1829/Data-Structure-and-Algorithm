#include<bits/stdc++.h>
using namespace std;

void MoveZeroToEnd(vector <int> &arr, int n){
    vector <int> temp;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size(); // nz => No. of Non-Zero Numbers
    for(int i=0; i<nz; i++){
        arr[i] = temp[i];
    }

    for(int i=nz; i<n; i++){
        arr[i] = 0;
    }
}

int main(){
    vector <int> arr = {1,0,2,3,4,1,0,3,0,0,0,20,20,220,0,1,0,0,2};
    int n = arr.size();

    cout << "Before Moving Zeroes" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    MoveZeroToEnd(arr,n);

    cout << "After Moving Zeroes to End" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}