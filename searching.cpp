#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"ENTER:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER AN ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"ENTER TO FIND:"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
       if(arr[i]==x){
        cout<<"FOUND AT:"<<i;
       }
    }

}