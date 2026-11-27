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
    int i = 0, j = n - 1, is_palindrome = 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    cout << ((is_palindrome) ? "YES\n" : "NO\n");
    return 0;
}