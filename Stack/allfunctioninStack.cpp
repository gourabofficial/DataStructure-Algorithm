#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

//push():

int isOverflow()
{
	int flag = top == MAX - 1;
	return flag;
}

void push(int data){
	if(isOverflow()){
		printf("Stack overflow\n");
		return ;
	}
	top = top + 1;
	stack[top] = data;
	printf("%d\t",data);
}

//pop():

int pop(){
	int value;
	if (top == -1){
		printf("Stack Underflow\n");
		exit(1);
		
	}
     value = stack[top];
	 top = top - 1;
	 printf("pop = %d\n",value);
	 	return value;
	 	
}

//isFull():

int isFull(){
	if(top = MAX - 1)
	return 1;
	else 
	return 0;
}

//isEmpty():

int isEmpty (){
	if(top == -1)
	return 1;
	else 
	return 0;
}

//isPeek():

int isPeek(){
	if(isEmpty()){
		printf("Stack underflow\n");
		exit(1);
	}
	return stack[top];
}


int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	pop();
	pop();
	
	return 0;
}






























