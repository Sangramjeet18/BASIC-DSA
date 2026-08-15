#include<iostream>
using namespace std;
/*
int main(){
    int n;
    cout<<"ENTER NUMBER:"<<endl;
    cin>>n;
    cout<<"ENTER AN ARRAY:"<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    int smallest;
    int largest;
    for(int i =0;i<=n;i++){
       smallest=min(arr[i],smallest);
       
    }
    cout<<"SMALLEST="<<smallest<<endl;
    
   

    return 0;

}
*/
//LINEAR SEARCH
int main(){
    int n,x;
    cout<<"ENTER:"<<endl;
    cin>>n;
    cout<<"GIVE THE NUMBER:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"ENTER THE NUMBER WANT TO SEARCH:"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"FOUND"<<arr[i]<<endl;
        }
        else{
            cout<<"NOT FOUND at"<<arr[i]<<endl;
        }
    }
    return 0;

}