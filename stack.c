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

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// PUSH
void push(char x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

// POP
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

// PRIORITY
int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return -1;
}

// REVERSE STRING
void reverse(char exp[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(exp) - 1; i < j; i++, j--) {
        temp = exp[i];
        exp[i] = exp[j];
        exp[j] = temp;
    }
}

int main() {
    char infix[MAX], postfix[MAX], prefix[MAX];
    int i, j = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    // Step 1: Reverse
    reverse(infix);

    // Step 2: Replace brackets
    for (i = 0; infix[i]; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    // Step 3: Infix → Postfix
    for (i = 0; infix[i]; i++) {

        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }

        else if (infix[i] == '(') {
            push(infix[i]);
        }

        else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[j++] = pop();
            pop();
        }

        else {
            while (top != -1 && priority(stack[top]) > priority(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
    }

    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';

    // Step 4: Reverse postfix → prefix
    strcpy(prefix, postfix);
    reverse(prefix);

    printf("Prefix Expression: %s\n", prefix);

    return 0;
}

//INFIX TO POSTFIX //
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
char stack[100];
int top=-1;
void push(int x){
    if (top==MAX-1){
        printf("STACK OVERFLOW\n");
        return;
    }
    stack[++top]=x;
}
int pop(){
    if(top==-1){
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    return stack [top--];
}
int priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='/'){
        return 2;
    }
    if(x=='^'){
        return 3;
    }
    return -1;
}
int main(){
    int i,j=0;
    char infix[MAX],postfix[MAX];
    printf("ENTER INFIX EXPRESSION:");
    scanf("%s",infix);
    for(i=0;infix[i];i++){
        if(isalnum(infix[i])){
            postfix[j++]=infix[i];
        }
        else if(infix[i]=='('){
            push(infix[i]);
        }
        else if(infix[i]==')'){
            while(top!=-1&& stack[top]!='('){
                postfix[j++]=pop();

            }
            pop();

        }
        else{
            while(top!=-1 && priority(stack[top])>priority(infix[i])){
                postfix[j++]=pop();
            }
            push(infix[i]);
        }

        }
    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("POSTFIX EXPRESSION:%s\n",postfix);
    return 0;

}
*/
// Evaluate a given Postfix Expression using stack.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int x){
    if(top==MAX-1){
        printf("STACK OVERFLOW\n");
        return;
    }
    stack[++top]=x;
}
int pop(){
    if(top==-1){
        Printf("STACK UNDERFLOW\n");
        return -1;
    }
    return stack [top--];
}
int main(){
    char postfix[MAX];
    int i, op1, op2, result;
    printf("ENTER POSTFIX EXPRESSION:");
    scanf("%s",postfix);
    for(i=0;postfix[i];i++){
        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            op2=pop();
            op1=pop();
            switch(postfix[i]){
                case '+':
                    result=op1+op2;
                    break;
                case '-':
                    result=op1-op2;
                    break;
                case '*':
                    result=op1*op2;
                    break;
                case '/':
                    result=op1/op2;
                    break;
                default:
                    printf("INVALID OPERATOR\n");
                    return 1;

            }
            push(result);
        }
    }
    printf("RESULT:%d\n",pop());
    return 0;

}
