#include <bits/stdc++.h>
using namespace std;
int main()
{
    // //static array creat,input and output
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Dynamic array creat , input and putput
    int *arr = new int[5]; // creat
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // input
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // output
    }
    return 0;
}