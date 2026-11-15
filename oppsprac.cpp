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
    static int count;
    Employee(){
        count++;
    }
    void calsalary(int bonus=2000){
       cout<<"TOTAL SALARY:"<<salary+bonus<<endl;
    }
    void output()const
    {
        cout << "NAME: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "SALARY: " << salary << endl;
       
    }
    static void displaycount(){
        cout<<"TOTAL EMPLOYEES:"<<count<<endl;
    }
    
};
int Employee::count=0;

int main()
{
    int n;
    cout<<"GIVE EMPLOYEE COUNT:"<<endl;
    cin>>n;
    if(n<=0){
        return 0;
    }
    Employee *e=new Employee[n];

   

    cout << "ENTER EMPLOYEE DETAILS:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEMPLOYEE: " << i + 1 << endl;
        e[i].input();
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEMPLOYEE: " << i + 1 << endl;
        e[i].output();
        e[i].calsalary();
    }
    delete []e;
    

    return 0;
}