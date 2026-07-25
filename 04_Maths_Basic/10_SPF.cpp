#include<bits/stdc++.h>
using namespace std;

vector<int> buildSPF(int n){
    vector<int> SPF(n + 1);

    for(int i = 1; i <= n; i++){
        SPF[i] = i;
    }

    for(int i = 2; i * i <= n; i++){
        if(SPF[i] == i){
            for(int j = i * i; j <= n; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }
    return SPF;
}

void SPF_queries(vector<int> nums){
    if(nums.empty()) return;

    int n = 0;
    for(int x : nums){
        n = max(n, x);
    }

     vector<int> SPF = buildSPF(n);

    for(int x : nums){
        cout << x << " : ";
        int num = x;

        while(num != 1){
            cout << SPF[num] << " ";
            num /= SPF[num];
        }

        cout << endl;
    }
}

int main(){
    int q;
    cin >> q;

    vector<int> nums;

    while(q > 0){
        int x;
        cin >> x;
        nums.push_back(x);
        q--;
    }

    SPF_queries(nums);

    return 0;
}