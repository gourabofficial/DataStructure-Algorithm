#include<stdio.h>
#include<stdlib.h>
#define max 5

int cqueue[max];
int front = -1;
int rear  = -1;

//function
void enqueue(int);
int dequeue();
int isEmpty();
void print();
int isFull();
int peek();

int main(){
    int choice,data;
    while(1){
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.print the first element\n");
        printf("4.print all the element\n");
        printf("5.Quit\n");
        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                  printf("Enter the element to insert the queue: \n");
                  scanf("%d",&data);
                  enqueue(data);
                  printf("%d is insert the queue\n",data);
                  break;
            case 2:
                  data = dequeue();
                  printf("%d deleted in the queue\n",data);
                  break;
            case 3:
                  printf("The first element is %d\n",peek());
                  break;
            case 4:
                  print();
                  break;
            case 5:
                  exit(1);
                  break;

            default:
                  printf("Worng choice\n");
        }
    }
    
}

void enqueue(int  data){
    if (isFull()){
        printf("Queue Overflow\n");
        exit(1);
    }
    if(front == -1)
    front = 0;

    if(rear == max - 1)
    rear = 0;

    else
    rear = rear + 1;
    cqueue[rear] = data;

   
   
}

int dequeue(){
    int data;
    if(isEmpty()){
        printf("Queue is underflow");
        exit(1);
    }
    data = cqueue[front];
    if(front == rear){
        front = -1;
        rear  = -1;
    }

    if(front == max - 1)
       front = 0;

    else
        front = front + 1;
        return data;
}

int isFull(){
    if((front == 0 && rear == max -1) || (front == rear + 1))
    return 1;
    else 
    return 0;
}

int isEmpty(){
    if(front == -1)
    return 1;
    else 
    return 0;
}

int peek(){
    if(isEmpty()){
        printf("Queue underflow\n");
        exit(1);
    }
    return cqueue[front];
}
void print()
{
    int i;
    if(isEmpty()){
        printf("Queue is underflow\n");
        exit(1);
    }
    printf("Queue: \n");
    for(i = front; i <= rear; i++)
    {
        printf("%d\t",cqueue[i]);
    }
        printf("\n");
    
}
