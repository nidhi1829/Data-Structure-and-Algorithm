#include<bits/stdc++.h>
using namespace std;

//Optimal Solution
int LargestElement(int arr[], int n){
    int Max = arr[0];
    for(int i=0; i<n; i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    return Max;
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max = LargestElement(arr,n);
    cout << "The Largest Element in the array is " << max << endl;

    return 0;
}