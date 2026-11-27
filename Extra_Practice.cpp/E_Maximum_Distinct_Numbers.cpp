#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    int i = 1;
    while (1)
    {
        sum += i;
        if (sum > n)
        {
            break;
        }
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}