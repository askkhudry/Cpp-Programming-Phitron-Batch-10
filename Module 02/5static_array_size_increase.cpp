#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // size barate hole joto size barabo seta soho new array creat korte hobe erpor ager array ta new array te rakhte hobe 
    int b[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 40;
    b[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}