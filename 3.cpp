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

    int n;
    cout << "how many records u want to enter: ";
    cin >> n;


    for (int i = 1; i <= n; i++)
    {
        Student obj;

        cout << "Enter the Roll No of student no " << i <<": ";
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cout << "Enter the Name of student no " << i <<": ";
        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";

        cout << "Enter the Class of student no " << i <<": ";
        cin >> obj.Class;

        cout << "Enter the Year of student no " << i <<": ";
        cin >> obj.Year;

        cout << "Enter the Total Marks obtained by student no " << i << ": ";
        cin >> obj.TotalMarks;

        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
    }

    return 0;
}