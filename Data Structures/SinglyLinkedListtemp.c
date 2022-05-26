#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node* next;
}node;

void insert_at(node **head,int n,int data);

int main()
{
    node *head=NULL;
    int choice;
    while(1)
    {
        switch(choice)
        {
            
        }
    }



    return 0;
}

void insert_at(node **head,int n,int data)
{
    if(*head==NULL)
    {
        *head=(node*)malloc(sizeof(node));
        (*head)->number=n;
        (*head)->next=NULL;
    }
    else
    {
        node *ptr=*head;
        for(ptr;ptr->number!=n;ptr=ptr->next);
        node *temp=(node*)malloc(sizeof(node));
        temp->next=(*head)->next;
        (*head)->next=temp;
        temp->number=data;
    }
}