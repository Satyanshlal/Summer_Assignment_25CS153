//Write a program to Create marksheet generation system.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int roll;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks of 5 Subjects:" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n-------- MARKSHEET --------" << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    return 0;
}