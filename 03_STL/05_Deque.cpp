#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    // dq.pop_back(); // {3,4,1}
    // dq.pop_front(); // {4,1}

    // dq.back();
    // dq.front();

    deque<int>::iterator dq1 = dq.begin();
    deque<int>::iterator dq2 = dq.end();

    for(auto dq3:dq){
        cout << dq3 << " ";
    }

    //rest of functions same as vector
    // begin, end, rbegin , rend, clear, insert, size, swap
}

int main()
{
    return 0;
}