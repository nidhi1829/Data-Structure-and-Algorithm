#include<bits/stdc++.h>
using namespace std;

// Dutch National Flag Algorithm...

vector<int> SortArr(int n, vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = n-1; 

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

int main(){

    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = arr.size();

    vector<int> result = SortArr(n , arr);
    for(auto r:result){
        cout << r << " ";
    }

    return 0;
}