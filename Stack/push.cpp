#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[5];
int top = -1;

void push(int data){
	if(top == MAX - 1){
		printf("Stack Overflow\n");
		return ;
	}
	top = top + 1;
	stack_arr[top] = data;
	printf("%d\t",data);
	
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	
	return 0;
	
}

