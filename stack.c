#include<stdio.h>
#include<stdlib.h>
int *stack;
int top=-1;
int max;
//PUSH OPERATION//
void push(int value){
    if(top==max-1){
        printf("STACK OVERFLOW\n");
    }
    else{
        top++;
        stack[top]=value;
    }
}
//POP OPERATION//
void pop(){
    if(top==-1){
        printf("STACK UNDERFLOW\n");

    }
    else{
        int value=stack[top];
        top--;
        printf("POPPED VALUE:%d\n",value);
    }
}
//PEEK OPERATION//
void peek(){
    if(top==-1){
        printf("STACK IS EMPTY\n");
    }
    else{
        printf("TOP VALUE:%d\n",stack[top]);
    }
}
//DISPLAY OPERATION//
void display(){
    if(top==-1){
        printf("STACK IS EMPTY\n");
    }
    else{
        printf("STACK ELEMENTS:\n");
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
    }
int main(){
    int choice,value;
    printf("ENTER THE SIZE OF THE STACK:");
    scanf("%d",&max);
    stack=(int*)malloc(max*sizeof(int));
    while(1){
        printf( "\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("ENTER THE VALUE TO PUSH:");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
               pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                free(stack);
                exit(0);
            default:
                printf("INVALID CHOICE\n");
        }

    }
    return 0;
}

