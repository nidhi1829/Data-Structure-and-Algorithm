#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int> a, vector<int> b){
    int m = a.size();
    int n = b.size();

    vector<int> count(n, 0);
    vector<int> ans;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i] == b[j] && count[j] == 0){
                ans.push_back(a[i]);
                count[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}

int main(){
    vector <int> a = {1,1,2,3,4,5};
    vector <int> b = {2,3,4,4,5,6,7,8,9,10};
    vector<int> result = Intersection(a,b);
    cout << "The Intersection of Two Sorted Array" << endl;
    for(int num:result){
        cout << num << " ";
    }cout << endl;

    return 0;
}