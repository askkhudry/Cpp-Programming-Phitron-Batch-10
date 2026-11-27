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

Student *fun()
{
    Student *Karim = new Student(10, 2, 4.98);
    return Karim;
}

int main()
{
    Student *karim = fun();
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}