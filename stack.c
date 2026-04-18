/*#include<stdio.h>
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
*/
//Check Whethr an Expression is Balanced or Not//
#include<stdio.h>
#include<stdlib.h>
char *stack;
int top=-1;
int max;
//PUSH OPERATION//
void push(char value){
    if(top==max-1){
        printf("STACK OVERFLOW\n");

    }
    else{
        top++;
        stack[top]=value;

    }
}
//POP OPERATION//
char pop(){
    if(top==-1){
        printf("STACK UNDERFLOW\n");
        return '\0';
    }
    else{
        char value=stack[top];
        top--;
        return value;
    }
}
int isBalanced(char *exp){
    for(int i=0;exp[i]!='\0';i++){
        char ch=exp[i];
        if(ch=='(' || ch=='{' || ch=='['){
            push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            char topChar=pop();
            if((ch==')' && topChar!='(') || (ch=='}' && topChar!='{') || (ch==']' && topChar!='[')){
                return 0;
            }
        }
    }
    return (top==-1);
}
int main(){
    char exp[100];
    printf("ENTER THE SIZE OF THE STACK:");
    scanf("%d",&max);
    stack=(char*)malloc(max*sizeof(char));
    if(stack==NULL){
        printf("MEMORY ALLOCATION FAILED\n");
        return 1;
    }
    printf("ENTER AN EXPRESSION:");
    scanf("%s",exp);
    if(isBalanced(exp)){
        printf("EXPRESSION IS BALANCED\n");
    }
    else{
        printf("EXPRESSION IS NOT BALANCED\n");
    }
    free(stack);
    return 0;
}

