#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int data){
	if (top == MAX - 1){
		printf("Stack is Overflow\n");
		return ;
	}
	top = top + 1;
	stack[top] = data;
}

int pop(){
	int value;
	if ( top == -1){
		printf("Stack Underflow\n");
		exit(1);
	}
	value = stack[top];
	top = top - 1;
	return value;
}

void primeFact(int num){
	int i = 2;
	while (num != 1){
	while (num % i == 0){
		push(i);
		num = num / i;
	}
	   i++;
  } 
  while ( top != -1){
  	
  	printf("%d\t",pop());
  	
  }
}

int main(){
	int number ;
	printf("Enter a possative Number: ");
	scanf("%d",&number);
	
	primeFact(number);
	return 0;
}











