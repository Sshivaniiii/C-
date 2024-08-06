#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insertion(struct node *head,int info){
    struct node *temp;
    temp=(struct node *) malloc(sizeof(struct node));
    temp->data=info;
    temp->next=head;
    temp=head;
}
void hello(struct node *list){
    while(list!=NULL){
        printf("element is %d \n",list->data);
        list=list->next;
    }
}
int main(){
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
head=(struct node*) malloc(sizeof (struct node));
second=(struct node*) malloc(sizeof (struct node));
third=(struct node*) malloc(sizeof (struct node));
fourth=(struct node*) malloc(sizeof (struct node));
head->data=10;
head->next=second;
second->data=20;
second->next=third;
third->data=30;
third->next=fourth;
fourth->data=40;
fourth->next=NULL;
int info=100;
insertion(head,info);
hello(head);
}