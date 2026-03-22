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
