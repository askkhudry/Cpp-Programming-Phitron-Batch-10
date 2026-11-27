#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int not_possible = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = a[i] + a[j] + a[k];
                    if (sum == s)
                    {
                        not_possible = 1;
                        break;
                    }
                }
                if (not_possible == 1)
                {
                    break;
                }
            }
            if (not_possible == 1)
            {
                break;
            }
        }
        cout << ((not_possible == 1) ? "YES\n" : "NO\n");
    }
    return 0;
}