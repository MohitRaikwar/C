#include<stdio.h>

//for exit()function call
#include<stdlib.h>

//Declaration of maximum size of array using macro
#define MAX 10

//functions prototype
void create();
int length_list();
int retrieve_item(int index);
void update_item(int index,int newitem);
void insert_item(int index,int item);
void delete_item(int index);
void traverse_list();

//Global array and size
int arr[MAX],n;

//main function
int main()
{
    while(1)
  {
    int choice,index,element;
    printf("\nSelect from following options :\n\n");
    printf("1.Create a list\n");
    printf("2.Find the length of the list\n");
    printf("3.Retrieve the ith item from the list\n");
    printf("4.Update the ith item in the list with new item\n");
    printf("5.Inset a new item in the ith position of the list\n");
    printf("6.Delete an item from the ith position of the list\n");
    printf("7.Traverse the items in the list from left to right\n");
    printf("8.Exit\n");
    printf("\nEnter your choice :");
    scanf("%i",&choice);
    switch (choice)
    {
    case 1:create();
           break;

    case 2:printf("Size of list is : %d",n);
           break;

    case 3: if(n!=0)
            {
                printf("Enter the index to retrieve element :");
                scanf("%d",&index);
                if(index<n)
                {
                    printf("Element at index %d is : %d",index,retrieve_item(index));
                }
                else
               {
                    printf("Index value greater the size of list");
               }
            }
            else
            {
                printf("Can't retrive,list is empty!");
            }
            break;

    case 4:if(n!=0)
            {
                printf("Enter the index :");
                scanf("%d",&index);
                printf("Enter the new value :");
                scanf("%d",&element);
                update_item(index,element);
            }
            else
            {
                printf("Can't update,list is empty!");
            }
           break;

    case 5:if(n==MAX)
            printf("List is already full , can't insert new elements");
           else
           {
               printf("Enter the index you want to insert new element :");
               scanf("%d",&index);
               printf("Enter the value of element :");
               scanf("%d",&element);
               insert_item(index,element);
           }
           break;

    case 6:if(n!=0)
           {
             printf("Enter the index of element to be deleted :");
             scanf("%d",&index);
             delete_item(index);
           }
           else
           {
               printf("Can't delete,list is empty!!");
           }
           break;
    case 7:traverse_list();
           break;
    case 8:exit(0);
           break;

    default:printf("Wrong choice..");
            break;
    }
  }
  return 0;
}

void create()
{
    do
    {
        printf("\nEnter size of list :");
        scanf("%d",&n);
        if(n<=MAX)
        {
            for(int i=0;i<n;i++)
            {
               printf("Enter %d element of list :",i+1);
               scanf("%d",&arr[i]);
            }
        }
        else
        {
            printf("List size can't exceed %d",MAX);
        }
    }while(n>MAX);
}

//returns the item at i'th index
int retrieve_item(int index)
{
    return arr[index];
}

//updates the i'th index with new value
void update_item(int index,int newitem)
{
        arr[index]=newitem;
        printf("Successfully updated");

}

//inserts a new item in list if space is available in list
void insert_item(int index,int item)
{
    if(index<n)
    {
        for(int i=n-index;i>index;i--)
        {
        arr[i]=arr[i-1];
        }
     arr[index]=item;
      n++;
    }
    else
    {
        arr[index]=item;
        n+=(index-n+1);
    }
    printf("Successfully inserted new element in list");
}

//deletes i'th index element from list
void delete_item(int index)
{
    for(int i=index;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Successfully deleted item from list");

}

//traverse list from left to right
void traverse_list()
{
    if(n!=0)
    {
        for(int i=0;i<n;i++)
        {
            printf("Element at %d index : %d\n",i,arr[i]);
        }
    }
    else
    {
        printf("List is empty!");
    }
}
