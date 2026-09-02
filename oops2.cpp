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
    */
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