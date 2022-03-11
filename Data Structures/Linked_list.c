#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node* next;
}node;
void insert_at_last(node**,int); 
void insert_at_first(node** , int);
void free_list(node**);
void show_list(node**);
int main()
{
 
  node* list =NULL;
  int n;
  while(1)
  { 
    
    int choice;
    printf("\nSelect from following options :\n\n");
    printf("1.Insert new node at start of list\n");
    printf("2.Insert new node at end of list\n");
    printf("3.Show list\n");
    printf("4.Exit\n");
    printf("\nEnter your choice :");
    scanf("%i",&choice);
    switch (choice)
    {
    case 1:
           printf("\nEnter number to insert :");
           scanf("%i",&n);
           insert_at_first(&list,n);
           break;
    case 2:
           printf("\nEnter number to insert :");
           scanf("%i",&n);
           insert_at_last(&list,n);
           break;
    case 3:show_list(&list);
           break;
    case 4:free_list(&list);
           exit(0);
           break;
    default:printf("Wrong choice..");
            break;
    }
  } 
  return 0;
}
void insert_at_last(node **list,int n)
{
  if(*list==NULL)
  {
      *list=malloc(sizeof(node));
      (*list)->number=n;
      (*list)->next=NULL;
  }
  else
  {
       
       node* last=*list;
       while(last->next!=NULL)
       {
           last=last->next;
       }
       node* tmp=malloc(sizeof(node));
       tmp->number=n;
       tmp->next=NULL;
       last->next=tmp;
  }
}
void insert_at_first(node** list, int n)
{
  if(*list==NULL)
  {
    *list=malloc(sizeof(node));
    (*list)->number=n;
    (*list)->next=NULL;
  }
  else
  {
    node* tmp=(node*)malloc(sizeof(node));
    tmp->number=n;
    tmp->next=*list;
    *list=tmp;
  }
}
void show_list(node**list)
{
    if(*list==NULL)
     printf("\nList is empty\n");
    else
     for(node* tmp=*list;tmp!=NULL;tmp=tmp->next)
      {
        printf("%i\n",tmp->number);
      }
}
void free_list(node** list)
{
  
  while(*list!=NULL)
  {
      node* tmp=(*list)->next;
      free(*list);
      *list=tmp;

  }

}