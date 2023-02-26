#include<stdio.h>
#include<stdlib.h>
struct Node{
          int data;
          struct Node * next;

};

void traverse(struct Node* ptr)
{
    while(ptr!=NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    }
}
int main()
{
    struct Node * head;
    struct Node * third;
    struct Node * second;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 10;
    third->next = NULL;

    traverse(head);

    return 0;
}

