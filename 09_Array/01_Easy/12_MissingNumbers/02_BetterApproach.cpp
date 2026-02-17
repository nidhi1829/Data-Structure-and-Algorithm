#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector <int> &arr, int N){
    vector<int> hash(N+1, 0);
    for(int i=0; i<N-1; i++){
        hash[arr[i]] = 1;
    }
    for(int i=1; i<N; i++){
        if(hash[i] == 0){
            return i;
        }
    }
}

int main(){
    vector <int> arr = {1,2,4,5};
    int N = 5;

    int result = MissingNumber(arr,N);
    cout << "The Missing Number is : " << result;
    return 0;
}