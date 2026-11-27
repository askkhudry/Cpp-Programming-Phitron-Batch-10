#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student rahim(2, 3, 4.98);
    return rahim;
}

int main()
{
    Student rahim = fun();
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}