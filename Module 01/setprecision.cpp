#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d = 2.345335;
    cout << d << endl; // ekhane dekha jacche je print korar por puro number ta print hocche na, amader eta control korar jonno setprecision lagbe, tw setar maddhome amra dosomik er por koy ghor lagbe seta control korte pari
    cout << fixed << setprecision(2) << d << endl;
}