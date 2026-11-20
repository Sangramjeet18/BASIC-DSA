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



class student{
    public:
        int roll;
        float marks;
        string name;
        student(int a, string b,float m){
            roll=a;
            name=b;
            marks=m;
        }
        void display(){
            cout<<"NAME:"<<name<<endl;
            
            cout<<"MARKS:"<<marks<<endl;
            
            cout<<"ROLL:"<<roll<<endl;
          
        }
};
int main(){
    student s1(1042,"SC",85.5);
    student s2(1043,"SD",90.5);
    s1.display();
    s2.display();
    return 0;
}

class number{
    public:
       int* ptr;
       number(int x){
        ptr=new int(x);
       }
       number(const number& n){
    ptr=new int(*n.ptr);}
    ~number(){
        delete ptr;
    }
void display(){
    cout<<*ptr<<endl;
}
};
int main(){
    number n1(50);
    number n2=n1;
    *n2.ptr=100;
    cout<<"n1=";
    n1.display();
    cout<<"n2=";
    n2.display();
    return 0;

}



class Result;  // Forward declaration

class Student {
private:
    int marks;

public:
    Student() {
        marks = 90;
    }

    friend void add(Student, Result);
};

class Result {
private:
    int y;

public:
    Result() {
        y = 10;
    }

    friend void add(Student, Result);
};

// Friend function definition
void add(Student a, Result b) {
    cout << "TOTAL MARKS: "
         << a.marks + b.y << endl;
}

int main() {
    Student obj1;
    Result obj2;

    add(obj1, obj2);

    return 0;
}
    */
class b;
class a{
    private:
    int x;
    public:
    a(){
        x=50;
    }
    friend void max(a,b);
};
class b{
    private:
    int y;
    public:
    b() {
        y=100;
    }
    friend void max (a,b);

};
void max(a A,b B){
    if(A.x>B.y){
        cout<<"A IS GREATER:"<<A.x<<endl;

    }
    else{
        cout<<"B IS GREATER:"<<B.y<<endl;
    }
}
int main(){
    a obj1;
    b obj2;
    max(obj1,obj2);
    return 0;

}