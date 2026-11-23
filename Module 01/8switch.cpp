#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
        // switch and case holo if else er motoi tobe ekhane ekta jinish extra je jodi ekhane ekta condition true hoye jay tahole nicher sob guloke se true dhore chek na korei print kore dey; ei problem er jonno amra protita case sesh e "break;" use korte pari
    case 1: // if(day==1)
        cout << "Saturday\n";
    case 2: // else if(day==2)
        cout << "Sunday\n";
    case 3: // else if(day==3)
        cout << "Monday\n";
    case 4: // else if(day==4)
        cout << "Tuesday\n";
    case 5: // else if(day==5)
        cout << "wednesday\n";
    case 6: // else if(day==6)
        cout << "Thrusday\n";
    case 7: // else if(day==7)
        cout << "Friday\n";
    default: // else
        cout << "Wrong input\n";
    }
    return 0;
}