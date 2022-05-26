#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
void insert(int n,int x);
void put(node*);
int list_size();
int search_element(int n);
void traverse_list();
int i;
node* head=NULL;
node* temp;
int main()
{
  
  free_list();
  return 0;
}
void insert(int n,int x)
{
    if(head==NULL)
    {
        head=(node *)malloc(sizeof(node));
        head->next=NULL;
        head->data=n;
    }
    else if(x>list_size()-1)
    {
        printf("Node %d doesn't exist in list\n",&x);
        return;
    }
    else
    {
    for(i=0,temp=head;i<n;i++,temp=temp->next);
    node* newnode=(node *)malloc(sizeof(node));
    newnode->data=n;
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
int search_element(int n)
{
    for(i=0,temp=head;temp!=NULL;temp=temp->next,i++)
    {
        if(temp->data ==n)
            return i;
    }
    return -1;
}

void delete_element(int n)
{
    int curr_node=search_element(n);
    if(curr_node==-1)
    {
        printf("Didn't found a node having data %d",n);
        return;
    }
    else if(curr_node=0)
    {
        temp=head;
        head=head->next;
        free(head);
    }
    else
    {
        for(temp=head;temp->next->next!=n;temp=temp->next);
        node *curr=temp->next;
        temp->next=curr->next;
        free(curr);
    }
}

int list_size()
{
    int count=0;
    for(temp=head;temp!=NULL;temp=temp->next)
        count++;
    return count;
}

void free_list()
{
    while(head!=NULL)
    {
        temp=head->next;
        free(head);
        head=temp;
    }
}

void traverse_list()
{
    for(temp=head;temp!=NULL;temp=temp->next)
        printf("%-2d",temp->data);
    printf("\n");
}