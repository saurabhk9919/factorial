#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
//function to create linkedlist
struct node*create(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

int count(struct node*head){
    int c=0;
    struct node*ptr=head;
    while(ptr!=NULL){
        c++;
        //  printf("%d ",ptr->data);
        ptr=ptr->next;
    }
        return c;
    
}
int main(){
    struct node*head=create(10);
    head->next=create(20);
    head->next->next=create(30);
    head->next->next->next=create(40);
    
   int nodecount = count(head);
   printf("%d",nodecount);
    return 0;

}