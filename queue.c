//QUEUE USING ARRAY STATIC//
#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1){
        printf("Queue Overflow");
    }
    else{
        if(front==-1)
            front=0;

    }
    rear ++;
    queue[rear]=x;
}
void dequeue(){
    if(front==-1||rear==-1){
        printf("UNDERFLOW");
    }
    else{
        printf("%d DELETED\n",queue[front]);
        front++;
    }
}
void display(){
    int i;
    if(front == -1 || rear==-1){
        printf("QUEUE IS EMPTY");

    }
    else{
        printf("QUEUE IS \n");
        for(i=front ;i<=rear; i++){
            printf("%d\t",queue[i]);
        }
    }
}
int main(){
    enqueue(30);
    enqueue(20);
    enqueue(40);
    enqueue(50); 
    dequeue();
    enqueue(150); 
    display();
    return 0;

}