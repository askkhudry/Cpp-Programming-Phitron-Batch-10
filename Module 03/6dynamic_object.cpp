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
int main()
{
    Student *karim = new Student(10, 2, 4.98);
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}