#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    int number;
    struct node* next;
}node;
void push(node**,int);
void pop(node**);
bool is_empty(node**);
void show_stack(node**);
void getTop(node**);
void free_stack(node**);
int main()
{
  node* Stack=NULL;
  int n;
  while(1)
  { 
    
    int choice;
    printf("\nSelect from following options :\n\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.Show Stack\n");
    printf("4.Get top element\n");
    printf("5.Exit\n");
    printf("\nEnter your choice :");
    scanf("%i",&choice);
    switch (choice)
    {
    case 1:
           printf("\nEnter number to push into Stack :");
           scanf("%i",&n);
           push(&Stack,n);
           break;
    case 2:pop(&Stack);
           break;
    case 3:show_stack(&Stack);
           break;
    case 4:getTop(&Stack);
           break;
    case 5:free_stack(&Stack);
           exit(0);
           break;
    default:printf("Wrong choice..");
            break;
    }
  }  

}
void push (node** ptr,int n)
{
    if(is_empty(ptr))
    {
      *ptr=malloc(sizeof(node));
      (*ptr)->number=n;
      (*ptr)->next=NULL;
      
    }
    else
    {
       node* tmp=(node*)malloc(sizeof(node));
      tmp->number=n;
      tmp->next=*ptr;
      *ptr=tmp;
      
    }
}
bool is_empty(node** ptr)
{
    if(*ptr==NULL)
    return true ;
    else 
    return false;
}
void show_stack(node** ptr)
{
    if(*ptr==NULL)
     printf("\nStack is empty\n");
    else
     for(node* tmp=*ptr;tmp!=NULL;tmp=tmp->next)
      {
        printf("%i\n",tmp->number);
      }
}
void free_stack(node** ptr)
{
  while(*ptr!=NULL)
  {
      node* tmp=(*ptr)->next;
      free(*ptr);
      *ptr=tmp;

  }

}
void pop(node** ptr)
{
   node* tmp=(*ptr)->next;
   free(*ptr); 
   *ptr=tmp;
}
void getTop(node** ptr)
{
  if(is_empty(ptr))
  printf("Stack is empty\n");
  else
  printf("%i",(*ptr)->number);

}