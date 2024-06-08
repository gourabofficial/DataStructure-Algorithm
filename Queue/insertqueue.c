#include<stdio.h>
#include<stdlib.h>
#define max 50

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(front == -1){
        front = 0;
        rear ++;
       queue[rear] = data;
    }
    printf("queue: %d",data);
}

// int main(){
//     int num;
//     printf("Enter a number to insert in the queue: \n");
//     scanf("%d",&num);
//     enqueue(num);
//     printf("queue = %d",num);
//     return 0;
// }
int main(){
    enqueue(500);
}