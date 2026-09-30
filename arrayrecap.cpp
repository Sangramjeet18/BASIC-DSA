#include<iostream>
using namespace std;
/*int main(){
    int n;
    cout<<"ENTER NUMBER:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
      
       if (arr[i]>max){ //main thing to remember
        max=arr[i];
       }
    }
    cout<<"MAX:-"<<max;
    return 0;
    


}
*/
int main(){
    int n;
    cout<<"ENTER NUMBER:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t"<<endl;
    }
    int max1=arr[0];
    int max2=arr[0];
    for(int i=0;i<n;i++){
      
       if (arr[i]>max1){ //main thing to remember
        max1=arr[i];
       }
       else if (arr[i]<max1 && arr[i]>max2 )
       {
        max2=max2;
       }
       

    }
    cout<<"MAX:-"<<max1<<endl;
    cout<<"MAX:-"<<max2;
    return 0;
    


}