#include <iostream>
#include <string>
using namespace std;

/*class Employee
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
    */
class bankaccount{
    int accnum;
    double balance;
    int depo;
    public:
    void profile();
    void display();
};
void bankaccount::profile(){
    cout<<"PROFILE:"<<endl;
    cin>>accnum;
    cout<<"balance:"<<endl;
    cin>>balance;
    cout<<"DEPOSITE:"<<endl;
    cin>>depo;
}
void bankaccount:: display(){
   cout<<"PROFILE:"<<accnum<<endl; 
   cout<<"BALANCE:"<<balance<<endl;
   cout<<"DEPOSITE BALANCE:"<<balance+depo<<endl;
}
int main(){
    int n;
    cout<<"PERSON:"<<endl;
    cin>>n;
    if(n<=0){
        return 0;
    }
    bankaccount *b= new bankaccount[n];
    for(int i=0;i<n;i++){
        cout<<"PROFILE "<<i+1<<endl;
        b[i].profile();
    }
    cout<<"====STATEMENT===="<<endl;
    for(int i=0;i<n;i++){
        cout<<"DISPLAY "<<i+1<<endl;
        b[i].display();
    }
    delete []b;
    return 0;

}