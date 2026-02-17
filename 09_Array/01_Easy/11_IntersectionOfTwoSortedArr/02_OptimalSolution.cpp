#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int> a, vector<int> b){
    int m = a.size();
    int n = b.size();

    vector<int> ans;

    int i = 0;
    int j = 0;
    while(i < m && j < n){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector <int> a = {1,2,2,3,3,4,5,6};
    vector <int> b = {2,3,3,5,6,6,7};
    vector<int> result = Intersection(a,b);
    cout << "The Intersection of Two Sorted Array" << endl;
    for(int num:result){
        cout << num << " ";
    }cout << endl;

    return 0;
}