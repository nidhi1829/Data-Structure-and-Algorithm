#include<iostream>
using namespace std;

int Floor(int arr[], int x, int n){
    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid + 1;
        } 
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int Ceil(int arr[], int x, int n){
    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
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

    int floor = Floor(arr, x, n);
    int ceil = Ceil(arr, x, n);
    cout << "Floor: " << Floor << endl;
    cout << "Ceil: " << Ceil << endl;

    return 0;
}