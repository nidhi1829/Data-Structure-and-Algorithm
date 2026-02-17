#include<bits/stdc++.h>
using namespace std;

//Brute Force Solution
int FirstLargestElement(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main(){
    int n;
    cout << "Enter the arr size: ";
    cin >> n;
    
    vector<int> arr;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }cout << endl;

    cout << "The Largest Element of Array is " << FirstLargestElement(arr) << endl;

    return 0;
}