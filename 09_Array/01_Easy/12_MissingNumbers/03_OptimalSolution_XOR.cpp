#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector <int> &arr, int N){
    int XOR1 = 0;
    int XOR2 = 0;

    for(int i = 0; i < N-1; i++){
        XOR2 = (XOR2 ^ arr[i]);
    }

    for(int i = 1; i <= N; i++){
        XOR1 = (XOR1 ^ i);
    }

    return (XOR1 ^ XOR2);
}

int main(){
    vector <int> arr = {1,2,4,5};
    int N = 5;

    int result = MissingNumber(arr,N);
    cout << "The Missing Number is : " << result;
    return 0;
}