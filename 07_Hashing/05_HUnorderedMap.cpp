#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Arr Size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //precompute
    unordered_map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Query: ";
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }

    return 0;
}