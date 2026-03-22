//LINEAR SEARCH//
/*#include<stdio.h>
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
*/
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

