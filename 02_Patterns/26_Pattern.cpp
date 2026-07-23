#include<iostream>
using namespace std;

/*
    _ _ _ 1
    _ _ 2 3
    _ 4 5 6
    7 8 9 10
*/

int main()
{
    int n ;
    cout << "Enter:";
    cin >> n;

    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int space = n-i;
        while(space)
        {
            cout << " ";
            space --;
        }
        int j = 1;
        while(j<=i)
        {
            cout << count;
            count ++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}