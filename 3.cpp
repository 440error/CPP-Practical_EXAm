#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("q_13output.txt");

    cout << "Start entering values ............." << endl;
    for (int i = 0; i <=5; i++)
    {
        Student obj;

        cout << "Enter the Roll No of student no-" << i << endl;
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cout << "Enter the Name of student no-" << i << endl;
        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";

        cout << "Enter the Class of student no-" << i << endl;
        cin >> obj.Class;

        cout << "Enter the Year of student no-" << i << endl;
        cin >> obj.Year;

        cout << "Enter the Total Marks obtained by student no-" << i << endl;
        cin >> obj.TotalMarks;

        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
    }

    return 0;
}