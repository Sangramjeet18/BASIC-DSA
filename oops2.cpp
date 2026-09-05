#include<iostream>
using namespace std;
//Question 1;
/*class simpleinterest{
private:
    float principal,time;
public:
    simpleinterest(float p,float t){
    principal=p;
    time=t;
    }
    inline float calculate(float rate=6.5){
    return (principal*rate*time)/100;}
};
int main(){
    float p,t;
    cout<<"ENTER YOUR PRINCIPAL:"<<endl;
    cin>>p;
    cout<<"ENTER YOUR TIME:"<<endl;
    cin>>t;
    simpleinterest obj(p,t);
    cout<<"SIMPLE INTEREST:"<<obj.calculate()<<endl;
    return 0;
}
 
class car{
public:
    int price;
    string brand;
    void input(){
        cout<<"ENTER PRICE:"<<endl;
        cin>>price;
        cout<<"ENTER CAR NAME:"<<endl;
        cin>>brand;
        
    }
    void display(){
        cout<<"___CAR DETAILS___"<<endl;
        cout<<"THE PRICE OF THE CAR IS:"<<price<<endl;
        cout<<"THE BRAND NAME IS:"<<brand<<endl;


    }

};
int main(){
    car c;
    c.input();
    c.display();
    return 0;
}
    
class bankaccount{
private:
    int accountnumber,balance;
    string accountholdername;   
public:
    void input(){
        cout<<"ENTER ACCOUNT NUMBER:"<<endl;
        cin>>accountnumber;
        cout<<"ENTER BALANCE:"<<endl;
        cin>>balance;
        cout<<"ENTER ACCOUNT HOLDER NAME:"<<endl;
        cin>>accountholdername; 
    }
    void display(){
        cout<<"ACCOUNT NUMBER:"<<accountnumber<<endl;
        
        cout<<"BALANCE:"<<balance<<endl;
        
        cout<<"ACCOUNT HOLDER NAME:"<<accountholdername<<endl;
        
    }     
};   
int main(){
    bankaccount obj;
    obj.input();
    obj.display();

    
}
//

Write a C++ program for a Student class in which student objects are
 created dynamically using the new operator. 
 Ask the user for the number of students,
 dynamically allocate memory for that many student objects, 
 accept student details and marks, calculate their percentage,
 display their information, and finally release the dynamically
  allocated memory using the delete[] operator. 
//    

class student{
private:
    string name;
    int student_ID;
    float marks1,marks2,marks3;
    int average;
public:
    void acceptdetails(){
        cout<<"ENTER NAME:"<<endl;
        cin>>name;
        cout<<"ENTER STUDENT ID:"<<endl;
        cin>>student_ID;
        cout<<"MARKS1:"<<endl;
        cin>>marks1;
        cout<<"MARKS2:"<<endl;
        cin>>marks2;
        cout<<"MARKS3:"<<endl;
        cin>>marks3;
       
    }   
    void display(){
        cout<<"NAME OF THE STUDENT IS :"<<name<<endl;
        cout<<"STUDENT ID OF THE STUDENT IS "<<student_ID<<endl;
        cout<<"MARKS1:""\t"<<marks1<<endl<<"MARKS2:""\t"<<marks2<<endl<<"MARKS3:""\t"<<marks3<<endl;
        cout<<"THE AVERAGE WILL IS:"<<(marks1+marks2+marks3)/3<<endl;


    } 
};
int main(){
    int n;
    cout<<"ENTER NUMBER OF STUDENTS:"<<endl;
    cin>>n;
    student *s=new student[n];
    cout << "\nEnter Student Details:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":";
        s[i].acceptdetails();
    }

    // Display details
    cout << "\n\nStudent Information:\n";
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    // Release dynamically allocated memory
    delete[] s;

    cout << "\n\nMemory released successfully.";

    return 0;

}
 */
class librarybook{
private:    
};