#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;

    // Student(int id, char name[101], char section, int total_marks)
    // {
    //     this->id = id;
    //     this->name[101] = name[101];
    //     this->section = section;
    //     this->total_marks = total_marks;
    // }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int id, total_marks;
        // char name[101], section;
        Student s1;
        cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
        Student s2;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
        Student s3;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

        Student topper = s1;

        if (s2.total_marks > topper.total_marks)
        {
            topper = s2;
        }
        else if (s2.total_marks == topper.total_marks)
        {
            if (s2.id < topper.id)
            {
                topper = s2;
            }
        }

        if (s3.total_marks > topper.total_marks)
        {
            topper = s3;
        }
        else if (s3.total_marks == topper.total_marks)
        {
            if (s3.id < topper.id)
            {
                topper = s3;
            }
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;

        // cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.total_marks << endl;

        // cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.total_marks << endl;

        // cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.total_marks << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     int id;
//     char name[101];
//     char section;
//     int total_marks;

//     // Student(int id, char name[101], char section, int total_marks)
//     // {
//     //     this->id = id;
//     //     this->name[101] = name[101];
//     //     this->section = section;
//     //     this->total_marks = total_marks;
//     // }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // int id, total_marks;
//         // char name[101], section;
//         Student s1;
//         cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
//         Student s2;
//         cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
//         Student s3;
//         cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

//         Student topper = s1;

//         if (s2.total_marks > topper.total_marks)
//         {
//             topper = s2;
//         }
//         else if (s2.total_marks == topper.total_marks)
//         {
//             if (s2.id < topper.id)
//             {
//                 topper = s2;
//             }
//         }

//         if (s3.total_marks > topper.total_marks)
//         {
//             topper = s3;
//         }
//         else if (s3.total_marks == topper.total_marks)
//         {
//             if (s3.id < topper.id)
//             {
//                 topper = s3;
//             }
//         }

//         cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;

//         // cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.total_marks << endl;

//         // cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.total_marks << endl;

//         // cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.total_marks << endl;

//         // Student s1(id, name, section, total_marks);
//         // Student s2(id, name, section, total_marks);
//         // Student s3(id, name, section, total_marks);

//         // cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.total_marks << endl;
//         // cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.total_marks << endl;
//         // cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.total_marks << endl;
//         // cout << "\n";
//     }
//     return 0;
// }
