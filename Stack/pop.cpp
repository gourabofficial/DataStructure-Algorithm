#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1;
int stack_arr[];

//only describe  pop function : 

int pop(){
	int value ;
	if ( top == -1){
		printf("Stack Underflow\n");
		exit(1);
	}
	value = stack_arr[top];
	top = top + 1 ;
	printf("%d\t pop ",value);
	return value;
	
}
