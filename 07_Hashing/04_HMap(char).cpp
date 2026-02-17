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
    map<char,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;
    }

    char q;
    cout << "Query: ";
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << mpp[c] << endl;
    }

    return 0;
}