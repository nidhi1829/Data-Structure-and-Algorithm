#include<bits/stdc++.h>
using namespace std;

vector <int> UnionOfTwoSortedArr(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = b.size();

    set <int> st;
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int j=0; j<n2; j++){
        st.insert(b[j]);
    }

    vector <int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}

int main(){
    vector <int> a = {1,1,2,3,4,5};
    vector <int> b = {2,3,4,4,5,6,7,8,9,10};
    vector<int> Union = UnionOfTwoSortedArr(a,b);
    cout << "The Union of Two Sorted Array" << endl;
    for(int num:Union){
        cout << num << " ";
    }cout << endl;

    return 0;
}