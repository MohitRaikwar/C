/*      C program  to compute array addition(A[i]+B[i]) and array multiplication(A[i]*B[i])     */

#include<stdio.h>

//macro definiton
#define MAX_SIZE 100

//functions prototype
void input(int arr[],int size);
void print(int arr[],int size);
void set_zero(int arr[]);

//main function
int main()
{
    int m,n,A[MAX_SIZE],B[MAX_SIZE];
    set_zero(A);
    set_zero(B);
    printf("Enter size of first array : ");
    scanf("%d",&m);
    printf("Enter first array elements \n");
    input(A,m);
    printf("Enter size of second array : ");
    scanf("%d",&n);
    printf("Enter second array elements \n");
    input(B,n);
    printf("A[%d] = ",m);
    print(A,m);
    printf("B[%d] = ",n);
    print(B,n);
    int max=(m>n)?m:n;
    int C[max],D[max];
    for(int i=0;i<max;i++)
    {
        C[i]=A[i]+B[i];
        D[i]=A[i]*B[i];
    }
    printf("C[%d] = ",max);
    print(C,max);
    printf("D[%d] = ",max);
    print(D,max);
    return 0;

}

//grants user to enter array elements
void input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
}

//prints the array
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
    printf("\n");
}

//set all index elements value to zero
void set_zero(int arr[])
{
    for(int i=0;i<MAX_SIZE;i++)
        arr[i]=0;
}