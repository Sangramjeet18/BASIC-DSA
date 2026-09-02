#include<iostream>
using namespace std;
//Question 1;
class simpleinterest{
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