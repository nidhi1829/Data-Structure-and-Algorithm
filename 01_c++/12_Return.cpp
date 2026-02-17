#include<bits/stdc++.h>
using namespace std;

// Take two nos. and print its sum...
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1,num2);
    cout << "Sum of two Number: " << result << endl;

    // math.h have inbuild functions
    int minimum = min(num1,num2);
    cout << minimum << endl;

    int maximum = max(num1,num2);
    cout << maximum << endl;

    return 0;
}