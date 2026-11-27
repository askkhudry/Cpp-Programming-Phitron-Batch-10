// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     char c;
//     cin >> a >> c >> b;

//     // if (c == '>')
//     //     (a > b) ? cout << "Right\n" : cout << "Wrong\n";
//     // else if (c == '<')
//     //     (a < b) ? cout << "Right\n" : cout << "Wrong\n";
//     // else if (c == '=')
//     //     (a == b) ? cout << "Right\n" : cout << "Wrong\n";
//     if (c == '>')
//         cout << ((a > b) ? "Right\n" : "Wrong\n");
//     else if (c == '<')
//         cout << ((a < b) ? "Right\n" : "Wrong\n");
//     else if (c == '=')
//         cout << ((a == b) ? "Right\n" : "Wrong\n");
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    bool ok = false;
    if (c == '>')
        ok = (a > b);
    else if (c == '<')
        ok = (a < b);
    else if (c == '=')
        ok = (a == b);

    cout << (ok ? "Right\n" : "Wrong\n");
    return 0;
}