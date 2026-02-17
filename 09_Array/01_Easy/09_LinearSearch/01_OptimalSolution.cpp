#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector <int> &arr, int n, int Element){
    for(int i=0; i<n; i++){
        if(arr[i] == Element){
            return i;
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {0,1,2,3,4,5,6,7,7,8,9,20};
    int n = arr.size();

    int Element;
    cout << "Enter Element: ";
    cin >> Element;

    cout << LinearSearch(arr,n,Element);

    return 0;
}