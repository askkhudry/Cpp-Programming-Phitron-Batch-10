#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // min_max_and swap function use , ei function gulo algorithom namok header file e ache tai shurutei ekta algorithm header file add korbo
    
    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    // // normal way te minimum nirnoy
    // if (a < b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    // // normal way te maximum nirnoy
    // if (a > b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    // // normal way te swap
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b << endl;
    return 0;
}