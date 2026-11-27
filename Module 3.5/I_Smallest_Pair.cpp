// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n + 1];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         // int the_smallest = a[1] + a[2] + 2 - 1;
//         int the_smallest = INT_MAX;
//         for (int i = 1; i < n; i++)
//         {
//             for (int j = i + 1; j <= n; j++)
//             {
//                 int temp = a[i] + a[j] + j - i;

//                 // if (the_smallest > temp)
//                 // {
//                 //     the_smallest = temp;
//                 // }
//                 the_smallest = min(the_smallest, temp);
//             }
//         }
//         cout << the_smallest << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = INT_MAX;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                ans = min(ans, a[i] + a[j] + j - i);

        cout << ans << '\n';
    }
}