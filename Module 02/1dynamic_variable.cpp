#include <bits/stdc++.h>
using namespace std;
int *p;
int *y;
void fun()
{
    // static memory delete hoye jay setar proman
    int b = 20;
    p = &b;
    cout << "fun function static memory = " << *p << endl;

    // dynamic memory delete hoyna setar proman
    int *c = new int;
    *c = 39;
    y = c;
    cout << "fun function dynamic memory = " << *y << endl;
    return;
}
int main()
{
    // static and dynamic
    int a = 10; // static variable creat

    int *x = new int; // dynamic variable creat
    *x = 100;
    cout << a << endl
         << *x << endl;

    // static memory delete hoye jay setar proman
    fun();
    cout << "main function static memory = " << *p << endl;

    // dynamic memory delete hoyna setar proman
    cout << "main function dynamic memory = " << *y << endl;
    return 0;
}