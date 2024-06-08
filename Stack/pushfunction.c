#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[5];
int top = -1;

//push function : 
void push(int data){
	if(top == MAX - 1){
		printf("%d not push because Stack is  Overflow\n",data);
		return ;
	}
	top = top + 1;
	stack_arr[top] = data;
	printf("%d\t",data);
	
}
//using pop function : 
int pop(){
	int value ;
	if (top == -1){
	printf("Stack is underflow\n");
	exit(1);
  }
	value = stack_arr[top];
	top = top - 1;
	printf("%d pop \n",value);
	return value ;
}
int main(){
	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
    pop();
	pop();
	return 0;
	
}

