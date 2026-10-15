#include<iostream>
using namespace std;
/*
//LINEAR SEARCH
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
*/
//BINARY SEARCH
int main(){
    int n,x;
    cout<<"ENTER:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"ENTER:"<<endl;
    cin>>x;
    int low=0;
    int high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            cout<<"FOUND:"<<mid;
             return 0;
        }
       
        else if (arr[mid]<x){
        
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    cout<<"NOT FOUND";
    return 0;
    
} 

    
