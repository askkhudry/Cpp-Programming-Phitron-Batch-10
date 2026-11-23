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

    cout << min({2, 5, 45, 1, 56, 5, 6}) << endl;
    cout << max({2, 5, 45, 1, 56, 5, 6}) << endl;
    // eksathe onek value er min and max ber korajay sei khetre sob gulo likhe 2nd bracket dite hobe

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