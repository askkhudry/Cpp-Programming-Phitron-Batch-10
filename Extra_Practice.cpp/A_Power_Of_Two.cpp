#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int flag = 1;
    while (1)
    {
        if (n == 2 || n == 1)
        {
            break;
        }
        if (n % 2 == 1)
        {
            flag = 0;
            break;
        }
        n /= 2;
    }
    if (flag == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}