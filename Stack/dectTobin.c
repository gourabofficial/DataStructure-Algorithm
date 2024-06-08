#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int top = -1;
int stack[MAX];

void push(int data){
	if(top == MAX - 1){
		printf("Stack Overflow\n");
		return;
	}
	top = top + 1;
	stack[top] = data;
}

int pop (){
	int value;
	if( top == -1)
	{
		printf("Stack underflow\n");
		exit(1);
	}
	value  = stack[top];
	top = top - 1;
	return value;
	
}

void DecToBin(int num){
	while (num != 0){
		push(num%2);
		num = num/2;
		
	}
	while(top != -1){
		printf("%d\t",pop());
	}
}

int main(){
	int number;
	printf("Enter a Decimal Number : ");
	scanf("%d",&number);
	DecToBin(number);
	return 0;
}
