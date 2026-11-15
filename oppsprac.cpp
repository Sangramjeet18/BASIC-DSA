#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int ID;
    int salary;

    void input()
    {
        cout << "ENTER NAME: ";
        cin >> name;

        cout << "ENTER ID: ";
        cin >> ID;

        cout << "ENTER SALARY: ";
        cin >> salary;
    }

    void output()
    {
        cout << "NAME: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "SALARY: " << salary << endl;
    }
};

int main()
{
    Employee e[3];

    cout << "ENTER EMPLOYEE DETAILS:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEMPLOYEE: " << i + 1 << endl;
        e[i].input();
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEMPLOYEE: " << i + 1 << endl;
        e[i].output();
    }

    return 0;
}