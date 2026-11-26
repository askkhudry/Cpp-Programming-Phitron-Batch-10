#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa) // constructor creat
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(4, 9, 4.43); // constructor call
    Student karim(2, 9, 5.00);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim.cls << " " << karim.roll << " " << karim.gpa << endl;

    // input niye korle
    // Student rahim;
    // cin>>rahim.cls>>rahim.roll>>rahim.gpa;
    return 0;
}