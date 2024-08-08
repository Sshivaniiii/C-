#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insertatend(struct node *first,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=first;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return first;
}
void hello(struct node *list){
while(list!=NULL){
    printf("enter the elements %d \n",list->data);
    list=list->next;
}
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    head=(struct node *) malloc(sizeof (struct node));
    second=(struct node *) malloc(sizeof (struct node));
    third=(struct node *) malloc(sizeof (struct node));
    fourth=(struct node *) malloc(sizeof (struct node));
    fifth=(struct node *) malloc(sizeof (struct node));
    sixth=(struct node *) malloc(sizeof (struct node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
    int data=80;
    insertatend(head,data);
    hello(head);
}