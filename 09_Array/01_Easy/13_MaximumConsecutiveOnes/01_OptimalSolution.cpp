#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(int arr[], int n){
    int maxi = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}

int main(){
    int arr[] = {1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = MaxConsecutiveOnes(arr, n);
    cout << result;

    return 0;
}