#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector <int> &arr, int N){
    for(int i=1; i<=N; i++){
        int flag = 0;
        for(int j=0; j<N-1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
    return -1;
}

int main(){
    vector <int> arr = {1,2,4,5};
    int N = 5;

    int result = MissingNumber(arr,N);
    cout << "The Missing Number is : " << result;
    return 0;
}