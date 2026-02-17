#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm...

vector<int> MajorityElement(int n, vector<int> &arr){
    int cnt = 0;
    int element;
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            cnt = 1;
            element = arr[i];
        }
        else if(arr[i] == element){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            cnt1++;
        }
        if(cnt1 > (n / 2)){
            return {element};
        }
    }
    return {-1};
}

int main(){
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = arr.size();

    vector<int> result = MajorityElement(n , arr);
    cout << result[0];

    return 0;
}