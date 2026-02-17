#include<bits/stdc++.h>
using namespace std;

// void RemoveDuplicate(vector<int> &arr, int n) {
//     set<int> st(arr.begin(), arr.end()); // Directly initialize from the vector
    
//     arr.assign(st.begin(), st.end()); // Assign unique elements back to arr
// }

void RemoveDuplicate(vector<int> &arr,int n){
    set <int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    arr.resize(index);
}

int main(){

    vector<int> arr = {1,1,2,3,4,5,6,6,6,7,7,8};
    int n = arr.size();
    
    cout << "Before Removing Duplicates:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    RemoveDuplicate(arr,n); 

    cout << "After Removing Duplicates:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}