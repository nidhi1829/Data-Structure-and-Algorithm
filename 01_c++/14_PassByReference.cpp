#include<bits/stdc++.h>
using namespace std;

// Pass By Reference means we send a orginial one and change the original...
int doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething(num);
    cout << "Num is " << num << endl;

    return 0;
}
