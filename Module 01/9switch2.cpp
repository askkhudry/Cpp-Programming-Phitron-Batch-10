#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 0: // case er moddhe sorasori value dite hoy noyto seta kaj kore na, case kono condition nite pare na ejonno condition ta switch er vitore dilam ar case e likhlam sei condition er ki ki value hote pare seta
        cout << "Even\n";
        break;
    case 1:
        cout << "Odd\n";
        break;
    }
    return 0;
}