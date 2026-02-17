#include<iostream>
using namespace std;

int LowerBound(int arr[], int x, int n){
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        } 
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter Values: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    int x;
    cout << "Enter Target: ";
    cin >> x;

    int Ans = LowerBound(arr, x, n);
    cout << "Lower Bound " << Ans;

    return 0;
}