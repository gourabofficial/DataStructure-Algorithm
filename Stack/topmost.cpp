#include<stdio.h>
#include<stdlib.h>
#define MAX 40

int stack[MAX];
int top = -1;

void push(int data){
	if(top == MAX - 1){
		printf("Stack Overflow\n");
		return ;
	}
	top = top + 1;
	stack[top] = data;
	printf("push = %d\t",data);
}

int pop(){
	int value;
	if(top == -1){
		printf("Stack underflow\n");
		exit(1);
	}
	value = stack[top];
	top = top - 1;
	printf("pop = %d",value);
	return value;
}

int peek(){
	if(top == -1){
		printf("Stack is empty\n");
		exit(1);
	}
	return stack[top];
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(22);
	push(9);
	printf("topmost element is %d\n",peek());
	return 0;
}












