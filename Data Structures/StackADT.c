#include<stdio.h>
#include<stdlib.h>

//Function prototypes
void push(int a[],int n,int *size);
void pop(int a[]);
void print_stack(int a[]);

//Keep tracks of top element of stack
int top=-1;

//Main function
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
                   push(arr,num,&capacity);
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
    free(arr);
    return 0;
}

/*  Pushes element n to the stack
    If stack overflow occurs then doubles the size of the stack   */
void push(int a[],int n,int *size)
{
    if(top>=(*size)-1)
    {
        printf("Stack Overflow\n");
        *size=2*(*size);
        int *temp=realloc(a,(*size)*sizeof(int));
        if(temp==NULL)
        {
            free(a);
            return;
        }
        else
            printf("Successfully doubled size of stack\n");
        temp[++top]=n;
        a=temp;
        printf("Successfully pushed %d to stack",n);
    }
    else
    {
        a[++top]=n;
        printf("Successfully pushed %d to stack",n);
    }
}

//Pops out the top element of the stack
void pop(int a[])
{
    if(top<0)
        printf("Stack underflow");
    else
        printf("Popped element is : %d\n",a[top--]);
}

//Prints the elements of stack
void print_stack(int a[])
{
    for(int i=top;i>=0;i--)
        printf("%d  ",a[i]);
    printf("\n");
}