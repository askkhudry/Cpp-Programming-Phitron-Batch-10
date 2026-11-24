#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int num = sqrt(n);

    int is_prime = 1;

    for (int i = 2; i <= num; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (n == 1)
        is_prime = 0;
    if (is_prime)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}