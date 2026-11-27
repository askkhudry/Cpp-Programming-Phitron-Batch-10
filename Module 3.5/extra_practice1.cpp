#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls;
    }
};
int main()
{
    Student rahim("rahim", 2, 'A', 98, 9);
    Student karim("karim", 1, 'A', 99, 9);
    Student abul("abul", 3, 'A', 97, 9);

    int highest = max({rahim.math_marks, karim.math_marks, abul.math_marks});
    
    if (highest == rahim.math_marks)
        cout << rahim.name << endl;
    else if (highest == karim.math_marks)
        cout << karim.name << endl;
    else if (highest == abul.math_marks)
        cout << abul.name << endl;
    return 0;
}