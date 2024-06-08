#include<stdio.h>
#include<stdlib.h>
#define max 50

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int data){
    if (front == -1){
        front = 0;
    }
        rear++;
        queue[rear] = data;
        printf("Queue = %d\n",data);
       
}

int dequeue(){
    int data;
    data = queue[front];
    front ++;
    
    printf("delete: %d\n",data);
    return data;
}

int main (){
    int num;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(45);
    enqueue(40);
    enqueue(47);
    enqueue(400);
    enqueue(50);
    enqueue(110);

   dequeue();
   dequeue();
   dequeue();

       printf("After deleting the element the Queue look like that \t");
       for (int i = front; i <=rear; i++)
       {
       printf("%d\t",queue[i]);
      }
   printf("\n");

  return 0;
}