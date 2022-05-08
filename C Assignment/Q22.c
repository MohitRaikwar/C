/*      C program to perform set operations         */

#include<stdio.h>
#include<stdbool.h> //for bool data type

//functions prototype
void set_union(int a[],int b[],int x,int y);
void set_intersection(int a[],int b[],int x,int y);
void set_difference(int a[],int b[],int x,int y);
void print_set(int a[],int n);
void input(int arr[],int size);

int count,i,j;

//main function
int main()
{
    int x,y;
    printf("Enter size of first set : ");
    scanf("%d",&x);
    int set1[x];
    printf("Enter first set elements \n");
    input(set1,x);
    printf("Enter size of second set : ");
    scanf("%d",&y);
    int set2[y];
    printf("Enter second set elements \n");
    input(set2,y);
    printf("Set A : ");
    print_set(set1,x);
    printf("Set B : ");
    print_set(set2,y);
    printf("Set union (A∪B) : ");
    set_union(set1,set2,x,y);
    printf("Set intersection (A∩B) : ");
    set_intersection(set1,set2,x,y);
    printf("Set difference (A-B) : ");
    set_difference(set1,set2,x,y);
    printf("Set difference (B-A) : ");
    set_difference(set2,set1,y,x);
    return 0;
}

//prints set union
void set_union(int a[],int b[],int x,int y)
{
    int size=x+y;
    bool isPresent;
    int setUnion[size];
    count=0;
    for(i=0;i<x;i++)
    {
        setUnion[count++]=a[i];
    }
    for(j=0;j<y;j++)
    {
        isPresent=false;
        for(i=0;i<x;i++)
        {
            if(b[j]==a[i])
            {
                isPresent=true;
                break;
            }
        }
        if(!isPresent)
            setUnion[count++]=b[j];
    }
    print_set(setUnion,count);

}

//prints set intersection
void set_intersection(int a[],int b[],int x,int y)
{
    int min=(x<y)?x:y;
    int intersection[min];
    count=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i]==b[j])
                intersection[count++]=a[i];
        }
    }
    print_set(intersection,count);
}

//prints set difference
void set_difference(int a[],int b[],int x,int y)
{
    int difference[x],count=0;
    bool isPresent;
    for(i=0;i<x;i++)
    {
        isPresent=false;
        for(j=0;j<y;j++)
        {
            if(a[i]==b[j])
                isPresent=true;
        }
        if(!isPresent)
            difference[count++]=a[i];
    }
    print_set(difference,count);
}

//prints the set
void print_set(int a[],int n)
{
    if(n==0)
        printf("{Φ}\n");
    else
    {
        printf("{");
        for(i=0;i<n-1;i++)
            printf("%d,",a[i]);
        printf("%d}\n",a[i]);
    }
}

//grants user to enter array elements
void input(int arr[],int size)
{
    for(i=0;i<size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&arr[i]);
    }
}