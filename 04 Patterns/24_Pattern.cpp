#include<iostream>
using namespace std;

/*
    1 1 1 1
    _ 2 2 2
    _ _ 3 3 
    _ _ _ 4
*/

int main()
{
    int n ;
    cout << "Enter:";
    cin >> n;

    int i = 1;
    while(i<=n)
    {
        int space = i-1;
        while(space)
        {
            cout << " ";
            space --;
        }
        int j = 1;
        while(j<=n-i+1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}