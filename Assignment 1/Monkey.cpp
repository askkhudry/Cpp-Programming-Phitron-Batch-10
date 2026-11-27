#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int len = strlen(s);
        // cout << len << endl;

        sort(s, s + len);
        // cout << s << "\n";

        for (int i = 0; i < len; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}