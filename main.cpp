#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    float mark;
};

Student s[5];
int total = 0;

void addStudent()
{
    cout << "Enter ID: ";
    cin >> s[total].id;

    cout << "Enter Name: ";
    cin >> s[total].name;

    cout << "Enter Mark: ";
    cin >> s[total].mark;

    total++;

    cout << "Student Added\n";
}

void showStudents()
{
    if (total == 0)
    {
        cout << "No Students\n";
        return;
    }

    for (int i = 0; i < total; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Mark: " << s[i].mark << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            showStudents();
            break;

        case 3:
            cout << "Program Ended\n";
            break;

        default:
            cout << "Wrong Choice\n";
        }

    } while (choice != 3);

    return 0;
}