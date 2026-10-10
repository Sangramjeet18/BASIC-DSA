#include<iostream>
using namespace std;
/*int main(){             //LARGEST ELEMENT
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

int main(){                 //LARGEST AND 2ND LARGEST ELEMENT ALSO
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

int main(){
    int n;
    cout<<"ENTER NUMBER:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int first=0;
    int last=n-1;
    while(last>first){
        swap(arr[first],arr[last]);
        first++;
        last--;
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<"\t";
    }
    return 0;
}
    
int main(){
    int n;
    cout<<"ENTER:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(end>start){
        if(arr[start]==0&&arr[end]!=0){
            swap(arr[start],arr[end]);
        }
        start++;
        end--;
    }
     for(int i=0;i<n;i++){
       cout<<arr[i]<<"\t";
    }
    return 0;
   
}

int main(){
    int n;
    cout<<"ENTER A NUMBER:"<<endl;
    cin>>n;
    cout<<"ENTER ARRAY:"<<endl;
    int arr[n];
    int uni=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[uni]){
            uni++;
            arr[uni]=arr[i];    //REMEMBER

        }
        


    }
    cout<<"SHORTED ARRAY:"<<endl;
    for(int i=0;i<=uni;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
  
}

int main(){
    int n;
    cout<<"ENTER AN NUMBER:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER AN ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    int b;
    cout<<"ENTER NUMBER A+B TO ADD:"<<endl;
    cin>>a;
    cin>>b;

    cout<<"LET's START MATCHING:"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==a+b){
            cout<<"FOUND:"<<arr[i]<<"\t"<<"POSITION:"<<i<<endl;
        }

        
    }
    int x;
    cout<<"ENTER A NUMBER TO FOUND:"<<endl;   
    cin>>x;
    int left=0,right=n-1;
    while(left<right){
        int sum =arr[left]+arr[right];
        if(sum==x){
            cout<<"FOUND:"<<arr[left]<<"+"<<arr[right];     //time complexity:- O(n^2)
            return 0;
        }
        else if(sum<x){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"PAIR NOT FOUND"<<endl;
    return 0;

}
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 4};
    int target = 9;

    unordered_set<int> seen;

    for (int i = 0; i < 4; i++) {
        int needed = target - arr[i];

        if (seen.find(needed) != seen.end()) {
            cout << needed << " + " << arr[i] << " = " << target;
            return 0;
        }

        seen.insert(arr[i]);
    }

    cout << "Pair not found";
    return 0;
}