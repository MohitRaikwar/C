#include<stdio.h>
#include<stdlib.h>

//Macro
#define MAX_SIZE 10

//Function protoypes
void dequeue(int a[]);
void enqueue(int a[],int n);
void print_queue(int a[]);

//Keeps track of front and rear elements of queue
int front=-1,rear=-1;

//Main function
int main()
{
    int queue[MAX_SIZE],choice,num;
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
                    enqueue(queue,num);
                    break;
            case 2:dequeue(queue);
                    break;
            case 3:if(front==-1 && rear==-1)
                        printf("Can't get front element because queue is empty\n");
                    else
                        printf("Element at front : %d",queue[front]);
                    break;
            case 4:print_queue(queue);
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
void dequeue(int a[])
{
    if(front==-1 && rear==-1)
        printf("Queue underflow\n");

    else if(front==rear)
    {
        printf("%d successfully dequeued.\n",a[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d successfully dequeued.\n",a[front]);
        front=(front+1)%MAX_SIZE;
    }
}

//Enqueue element to rear of the queue
void enqueue(int a[],int n)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=n;
        printf("%d successfully enqueued\n",n);
    }
    else if((rear+1)%MAX_SIZE==front)
        printf("Queue is overflow\n");

    else
    {
        rear=(rear+1)%MAX_SIZE;
        a[rear]=n;
        printf("%d successfully enqueued\n",n);
    }
}

//Prints the elements of queue
void print_queue(int a[])
{
    if(front==-1 && rear==-1)
        printf("Queue is empty\n");
    else
    {
        for(int i=front;i<=rear;i++)
            printf("%d  ",a[i]);
        printf("\n");
    }
}

