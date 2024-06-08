#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head -> data = 7;
    head -> link = NULL;

    printf("data = %d\t",head -> data);
    printf("address = %s",head->link);

    return 0;
}
