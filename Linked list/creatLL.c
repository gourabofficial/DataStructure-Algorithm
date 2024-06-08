#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = malloc(sizeof (struct node));
    head ->data = 7;
    head ->link = NULL;

    struct node *current = malloc (sizeof (struct node ));
    current -> data = 9 ;
    current -> link= NULL;
    head -> link = current;

    current = malloc(sizeof(struct node ));
    current->data = 10;
    current -> link = NULL;
    
    head ->link->link = current;

    printf("1st: Data = %d\t Address = %p\n" ,head->data,head->link);
    printf("2nd: Data = %d\t Address = %p\n" ,head->link->data,head->link->link);
    printf("3rd: Data = %d\t Address = %p\n",head->link->link->data,head->link->link->link);

    return 0;
}