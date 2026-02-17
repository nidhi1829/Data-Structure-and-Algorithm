#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack <int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    cout << st.top() << endl;; // prints 5 "** st[2] is invalid **" // in stack, indexing access is not allow
    st.pop(); // delete the top element 
    cout << st.top() << endl; // {4,3,2,1}

    cout << st.size() << endl; // size is 4
    cout << st.empty() << endl; // 0 means false stack is not empty

    // stack<int>::iterator s1 = st.begin(); not used iterator
    // stack<int>::iterator s2 = st.end(); don't have any iterator

    stack<int> str1,str2;
    str1.swap(str2);  // swapping
}

int main(){
    explainStack();

    return 0;
}