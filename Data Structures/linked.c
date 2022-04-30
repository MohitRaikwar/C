#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node* next;
}node;
node* insert(node*,int);
void put(node*);
int main()
{
    //node* list=malloc(sizeof(node));
    node* list=NULL;
    list=insert(list,5);
    list=insert(list,2);
    for(node* tmp=list;tmp!=NULL;tmp=tmp->next)
  {
    printf("%d\n",tmp->number);
  }

  while(list!=NULL)
  {
      node* tmp=list->next;
      free(list);
      list=tmp;

  }
  return 0;
}
node* insert(node* list,int n)
{
    if(list==NULL)
    {
        list=malloc(sizeof(node));
        list->next=NULL;
        list->number=n;
        return list;
    }
    else
    {
     node* head=malloc(sizeof(node));
     head->number=n;
     head->next=list;
     return head;   
    }
}