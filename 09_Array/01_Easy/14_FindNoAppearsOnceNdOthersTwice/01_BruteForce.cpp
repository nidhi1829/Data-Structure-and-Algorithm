#include<bits/stdc++.h>
using namespace std;

int NumAppearsOnceNdOthersTwice(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int cnt = 0;
        int num = arr[i];
        for(int j = 0; j < n; j++){
            if(arr[j] == num)
                cnt++;
        }
        if(cnt == 1) return num;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4};

    int result = NumAppearsOnceNdOthersTwice(arr);
    cout << result;

    return 0;
}