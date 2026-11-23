#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    // ternary operator evabe likhte hoy je first e condition tarpor "?" question mark tarpor true hole jeta hobe seta tarpor ":" semiclone tarpor false hole jeta seta
    //(condition) ? T : F;
    (x % 2 == 0)
        ? cout << "even\n"
        : cout << "odd\n";
    return 0;
}