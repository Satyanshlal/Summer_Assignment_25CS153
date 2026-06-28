//Write a program to Create student record management system.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

struct Student
{
    int roll_no;
    char name[50];
    float gpa;
};

void add_student(const string &filename)
{
    ofstream file(filename, ios::binary | ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll_no;
    cin.ignore();

    cout << "Enter Name: ";
    cin.getline(s.name, 50);

    cout << "Enter GPA: ";
    cin >> s.gpa;

    file.write((char *)&s, sizeof(Student));
    file.close();

    cout << "Record added successfully!" << endl;
}

void display_students(const string &filename)
{
    ifstream file(filename, ios::binary);

    if (!file)
    {
        cout << "No records found!" << endl;
        return;
    }

    Student s;

    cout << "\n--- Student Records ---" << endl;

    while (file.read((char *)&s, sizeof(Student)))
    {
        cout << "Roll No: " << s.roll_no
             << " || Name: " << s.name
             << " || GPA: " << s.gpa << endl;
    }

    file.close();
}

void search_student(const string &filename)
{
    ifstream file(filename, ios::binary);

    if (!file)
    {
        cout << "No records found!" << endl;
        return;
    }

    int roll;
    bool found = false;
    Student s;

    cout << "Enter Roll Number to search: ";
    cin >> roll;

    while (file.read((char *)&s, sizeof(Student)))
    {
        if (s.roll_no == roll)
        {
            cout << "\nRecord Found:" << endl;
            cout << "Roll No: " << s.roll_no << endl;
            cout << "Name: " << s.name << endl;
            cout << "GPA: " << s.gpa << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Record not found!" << endl;
    }

    file.close();
}

void delete_student(const string &filename)
{
    ifstream file(filename, ios::binary);

    if (!file)
    {
        cout << "No records found!" << endl;
        return;
    }

    ofstream temp("temp.dat", ios::binary);

    if (!temp)
    {
        cout << "Error creating temporary file!" << endl;
        file.close();
        return;
    }

    int roll;
    bool found = false;
    Student s;

    cout << "Enter Roll Number to delete: ";
    cin >> roll;

    while (file.read((char *)&s, sizeof(Student)))
    {
        if (s.roll_no == roll)
        {
            found = true;
        }
        else
        {
            temp.write((char *)&s, sizeof(Student));
        }
    }

    file.close();
    temp.close();

    if (found)
    {
        remove(filename.c_str());
        rename("temp.dat", filename.c_str());
        cout << "Record deleted successfully!" << endl;
    }
    else
    {
        remove("temp.dat");
        cout << "Record not found!" << endl;
    }
}

int main()
{
    string filename = "students.dat";
    int choice;

    while (true)
    {
        cout << "\n*** Student Record Management System ***" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by Roll No" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_student(filename);
            break;

        case 2:
            display_students(filename);
            break;

        case 3:
            search_student(filename);
            break;

        case 4:
            delete_student(filename);
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}