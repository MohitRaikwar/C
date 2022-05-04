#include<stdio.h>
#include<stdlib.h>

void push(int a[],int n,int size);
void pop(int a[]);
void print_stack(int a[]);

int top=-1;

int main()
{
    int capacity,choice,num;
    printf("Enter size of stack : ");
    scanf("%d",&capacity);
    int *arr=(int*)calloc(sizeof(int)*capacity,sizeof(int));
    while(1)
    {
        printf("\nSelect from following options :\n\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Get top\n");
        printf("4.Show stack\n");
        printf("5.Exit\n");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("Enter number to push : ");
                   scanf("%d",&num);
                   push(arr,num,capacity);
                   break;
            case 2:pop(arr);
                   break;
            case 3:printf("Top element of stack : %d",arr[top]);
                   break;
            case 4:print_stack(arr);
                   break;
            case 5:exit(0);
                   break;
            default:printf("Wrong choice\n");
                    break;
        }
    }
    return 0;
}

void push(int a[],int n,int size)
{
    if(top>=size-1)
    {
        printf("Stack Overflow\n");
        int *temp=(int*)calloc(2*sizeof(a),sizeof(int));
        for(int i=0;i<=top;i++)
            temp[i]=a[i];
        temp[++top]=n;
        a=temp;
        print_stack(a);
        //a=temp;
        printf("Successfully pushed %d to stack",n);
    }
    else
    {
        a[++top]=n;
        printf("Successfully pushed %d to stack",n);
    }
}
void pop(int a[])
{
    if(top<0)
        printf("Stack underflow");
    else
        printf("Popped element is : %d\n",a[top--]);
}

void print_stack(int a[])
{
    for(int i=top;i>=0;i--)
        printf("%d  ",a[i]);
    printf("\n");
}