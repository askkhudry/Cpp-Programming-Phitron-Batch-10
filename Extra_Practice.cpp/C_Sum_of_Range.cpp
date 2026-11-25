#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long sum_all = 0, sum_even = 0, sum_odd = 0;

    long long start = min(a, b), end = max(a, b);
    for (int i = start; i <= end; i++)
    {
        sum_all += i;
        (i % 2) == 0 ? sum_even += i : sum_odd += i;
    }
    cout << sum_all << endl
         << sum_even << endl
         << sum_odd << endl;
    return 0;
}