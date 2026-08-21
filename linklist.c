#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    int choice=1;
    do{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data for new node: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to insert more nodes? (1/0): ");
        scanf("%d",&choice);
    }while(choice==1);

printf("The linked list is: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;
}