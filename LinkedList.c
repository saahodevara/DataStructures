#include <stdio.h>
#include <stdlib.h>
 struct node {
     int data;
     struct node* next;
 };
 
 
 struct node* head;
 
void Delete(int n)
{
    struct node*temp1=head;
    int i;
    if(n==1)
    {
        head=temp->next;
        free(temp1);
        return;
    }
    for(i=0;i<n-2;i++)
    {
        temp1=temp1->next;//(n-1)th node
    }
    struct node* temp2=temp1->next;//nth node
    temp1->next=temp2->next;
    free(temp2);
}
 void Insert(int x){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=head;
     head=temp;
 }

 void InsertAt(int data, int n){
     struct node* temp1=(struct node*)malloc(sizeof(struct node*));
     temp1->data=data;
     temp1->next=NULL;
     if(n==1)
     {
         temp1->next=head;
         head=temp1;
         return;
     }
     struct node*temp2=head;
     for(int i=0;i<n-2;i++)
     {
         temp2=temp2->next;
     }
     temp1->next=temp2->next;
     temp2->next=temp1;
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
     InsertAt(2,1);
     InsertAt(3,2);
     InsertAt(4,1);
     InsertAt(5,1);

     Print();
     printf("enter the position :\n");
     scanf("%d",&n);
     Delete(n);
     Print();
     
 }
