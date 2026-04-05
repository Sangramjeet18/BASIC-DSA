/*
//LINEAR SEARCH//
#include<stdio.h>
int main(){
    int n,key;
    printf("ENTER NUMBER OF SIZE:");
    scanf("%d",& n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("ENTER THE ELEMENT YOU NEED TO FIND:");
    scanf("%d",& key);
    for(int i=0;i<n;i++){
        printf("  %d \t",arr[i]);
    }
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            printf("FOUND AT:%d",i);
            break;
        }
        else{
            printf("NOT FOUND");
        }
    }
    return 0;
}

//BINARY SEARCH//
#include<stdio.h>
int main(){
    int n,key;
    printf("ENTER NUMBER OF SIZE:");
    scanf("%d",& n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("ENTER THE ELEMENT YOU NEED TO FIND:");
    scanf("%d",& key);
    for(int i=0;i<n;i++){
        printf("  %d \t",arr[i]);
    }
    int low=0;
    int high=n-1;
    int found=0;
    for(;low<=high;){
        int mid= (low + high)/2;
        if(arr[mid]==key){
            printf("FOUND AT %d",mid);
            found=1;
            break;
        }else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       
    }
     if (found == 0){
            printf("NOT FOUND");
        }
    return 0;
}

//INSERT AN ELEMEMNT IN AN ARRAY AT LAST//
#include<stdio.h>
int main(){
    int n,key;
    printf("ENTER NUMBER OF SIZE:");
    scanf("%d",& n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("ENTER THE ELEMENT YOU NEED TO ADD:");
    scanf("%d",& key);
    for(int i=0;i<n;i++){
        printf("  %d \t",arr[i]);
    }
    printf("\n");
    arr[n]=key;
    printf("AFTER INSERTION:\n");
    for(int i=0;i<=n;i++){
        printf("  %d \t",arr[i]);
    }
    return 0;
}

//INSERT AN ELEMEMNT IN BEGINNING OF AN ARRAY//
#include<stdio.h>
int main(){
    int n,key;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element you want to add:");
    scanf("%d",&key);
    printf("BEFORE INSERTION:\n");
    for(int i=0;i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i=n;i>0;i--){
        arr[i]=arr[i-1];
}
    arr[0]=key;
    printf("AFTER INSERTION:\n");   
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

//INSERT AN ELEMEMNT IN ANY POSITION OF AN ARRAY//
#include<stdio.h>
int main(){
    int n,key,pos;
    printf("ENTER NUMBER OF SIZE:");
    scanf("%d",& n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("ENTER THE ELEMENT YOU NEED TO ADD:");
    scanf("%d",& key);
    printf("ENTER THE POSITION YOU NEED TO ADD:");
    scanf("%d",& pos);  
    printf("BEFORE INSERTION:\n");
    for(int i=0;i<n;i++){
        printf("  %d \t",arr[i]);
    }
    printf("\n");
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];

    }
    arr[pos]=key;
    printf("AFTER INSERTION:\n");
    for(int i=0;i<=n;i++){  
        printf("  %d \t",arr[i]);
    }           
    return 0;

}
 
//DELETE ANY ELEMENT IN AN ARRAY//
#include <stdio.h>
int main(){
    int n,pos;
    printf("ENTER THE SIZE OF AN ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE POSITION YOU NEED TO DELETE:");
    scanf("%d",& pos);
    printf("BEFORE DELETATION:\n");
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("AFTER DELETION:\n");
    for(int i=0;i<n-1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}   

//Merge two arrays//
#include<stdio.h>
int main(){
    int n,p,q;
    printf("ENTER THE SIZE OF FIRST ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("ENTER THE SIZE OF SECOND ARRAY:");
    scanf("%d",&p);
    int arr1[p];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<p;i++){
        scanf("%d",&arr1[i]);
    }
    
    q=n+p;
    int arr2[q];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<p;i++){
        arr2[n+i]=arr1[i];
    }
    printf("MERGED ARRAY:\n");
    for(int i=0;i<q;i++){
        printf("%d\t",arr2[i]);
    }   
    return 0;

}

//MERGE TWO SORTED ARRAYS//
#include<stdio.h>
int main(){
    int n,p,q;
    printf("ENTER THE SIZE OF FIRST ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE SIZE OF SECOND ARRAY:");
    scanf("%d",&p);
    int arr1[p];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<p;i++){
        scanf("%d",&arr1[i]);
    }
    int i=0;
    int j=0;
    while(i<n && j<p){
        printf("%d\t",arr[i]);
        printf("%d\t",arr1[j]);
        i++;
        j++;
    }
    while(i<n){
        printf("%d\t",arr[i]);
        i++;
    }
    while(j<p){
        printf("%d\t",arr1[j]);
        j++;
    }
    return 0;
}
*/
//FREQUENCY OF EVERY ELEMENT IN AN ARRAY//
#include<stdio.h>
int main(){
    int n;
    printf("ENTER SIZE OF AN ARRAY:");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ELEMENT:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=1;
                count++;
            }
        }
        printf("FREQUENCY OF %d IS %d\n",arr[i],count);
    }
    return 0;
}