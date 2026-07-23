#include<iostream>
using namespace std;

/*
    1 2 3 4
    _ 2 3 4
    _ _ 3 4 
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
        // int value = i;
        while(j<=n-i+1)
        {
            cout << j;
            // value++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}