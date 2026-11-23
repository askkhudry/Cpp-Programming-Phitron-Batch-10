#include <iostream>
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    cout << x << endl
         << c << endl
         << d << endl
         << (int)c << endl;

    int y = 65;
    cout << (char)y << endl; // typecast kore int val er ascci val print ba access
}