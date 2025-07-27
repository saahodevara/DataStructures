#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
void Reverse()
{
    struct node *current, *prev, *next;
    current=head;
    prev=NULL; 
    while(current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void Insert(int x){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=head;
     head=temp;
 }
 
  void Print(){
     struct node *temp=head;
     while(temp != NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }
     printf("\n");
     
 }
 
 int main(void) 
 {
     int n;
     head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Print();
     Reverse();
     Print();
     
 }
