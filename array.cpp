#include<iostream>
using namespace std;

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