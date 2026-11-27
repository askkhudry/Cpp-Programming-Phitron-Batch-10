#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        // cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
        // cout << a[i] << (i == 0 ? "" : " ");
    }
    return 0;
}