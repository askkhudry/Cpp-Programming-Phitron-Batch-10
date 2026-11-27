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

    sort(a, a + n); // ascending order sort
    // sort(a+2,a+n);//customize sort, array 2 nong val theke last porjonto sort korte
    // sort(a, a + n - 2); // array er last 2 ta val thik rekhe first theke sort korte

    // sort(a, a + n, greater<int>()); // descending order e sort function

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}