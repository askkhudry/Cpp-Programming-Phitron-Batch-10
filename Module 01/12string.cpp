#include <iostream>
using namespace std;
int main()
{
    //// space chara ekta word input
    // char s[100];
    // cin >> s;
    // cout << s;

    // // space soho ekta line input
    // char s[100];
    // cin.getline(s, 100);
    // cout << s;

    // age kono integer thakle array ba string input neyar somoy sei integer er por jei enter chapa hoy seta skip korte cin.ignore() function likhte hobe
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);
    cout << x << endl
         << s << endl;
    return 0;
}