#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row_a, column_a;
    cin >> row_a >> column_a;
    int a[row_a + 1][column_a + 1];
    for (int i = 1; i <= row_a; i++)
    {
        for (int j = 1; j <= column_a; j++)
        {
            cin >> a[i][j];
        }
    }
    int row_b, column_b;
    cin >> row_b >> column_b;
    int b[row_b + 1][column_b + 1];
    for (int i = 1; i <= row_b; i++)
    {
        for (int j = 1; j <= column_b; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[row_a + 1][column_b + 1];
    for (int i = 1; i <= row_a; i++)
    {
        for (int j = 1; j <= column_b; j++)
        {
            int sum = 0;
            for (int k = 1; k <= column_a; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (int i = 1; i <= row_a; i++)
    {
        for (int j = 1; j <= column_b; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    // for (int i = 1; i <= row_a; i++)
    // {
    //     for (int j = 1; j <= column_a; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // for (int i = 1; i <= row_b; i++)
    // {
    //     for (int j = 1; j <= column_b; j++)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
