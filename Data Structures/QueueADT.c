#include<stdio.h>
#include<stdlib.h>

//Macro
#define MAX_SIZE 10

//Function protoypes
int dequeue(int a[]);
int enqueue(int a[],int n);
void print_queue(int a[]);

//Keeps track of front and rear elements of queue
int front=0,rear=0;

//Main function
int main()
{
    int arr[MAX_SIZE],choice,num;
    while(1)
    {
        printf("\nSelect from following options :\n\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Show queue\n");
        printf("5.Exit\n");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("Enter number to enqueue : ");
                   scanf("%d",&num);
                    if(enqueue(arr,num))
                        printf("%d successfully enqueued\n",num);
                    else
                        printf("Can't enqueue , queue is already full\n");
                    break;
            case 2:if(!(front==rear))
                        printf("%d successfully dequeued.\n",dequeue(arr));
                    else
                        printf("Can't dequeue , queue is empty\n");
                    break;
            case 3:if(!(front==rear))
                        printf("Element at front : %d",arr[front]);
                    else
                        printf("Can't get first element because queue is empty\n");
                    break;
            case 4:if(!(front==rear))
                        print_queue(arr);
                    else
                        printf("Queue is empty\n");
                    break;
            case 5:exit(0);
                    break;
            default:printf("Wrong choice\n");
                    break;
        }
    }
    return 0;
}

//Dequeues front element of queue
int dequeue(int a[])
{
    int first=a[0];
    for(int i=0;i<rear;i++)
        a[i]=a[i+1];
    rear--;
    return first;
}

//Enqueue element to rear of the queue
int enqueue(int a[],int n)
{
    if(rear<MAX_SIZE)
    {
        a[rear++]=n;
        return 1;
    }
    else return 0;
}

//Prints the elements of queue
void print_queue(int a[])
{
    for(int i=0;i<rear;i++)
        printf("%d  ",a[i]);
    printf("\n");
}

