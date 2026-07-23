#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(3); // {1,2,3}

    q.back() += 5;

    cout << q.back(); // prints 8

    // q is {1,2,8}
    cout << q.front(); // prints 1

    q.pop(); // {2,8}

    cout << q.front(); // prints 2

    // size, swap and empty opertion are same as stack
}

int main(){

    explainQueue();

    return 0;
}