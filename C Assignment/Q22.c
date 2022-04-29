#include<stdio.h>

//functions prototype
void set_union(int a[],int b[],int x,int y);
void set_intersetion(int a[],int b[],int x,int y);
void set_difference(int a[],int b[],int x,int y);
void print_set(int a[],int n);

int count;

int main()
{
    printf("Φ=%s\n");
    return 0;
}

void set_union(int a[],int b[],int x,int y)
{

}

void set_intersetion(int a[],int b[],int x,int y)
{
    int min=(x<y)?x:y;
    int intersection[min];
    count=0;
    for(int i=0;i<min;i++)
    {
        for(int j=i;j<x;j++)
        {
            for(int k=0;k<y;k++)
            {
                if(a[j]==b[k])
                    intersection[count++]=a[j];
            }
        }
    }
}

void set_difference(int a[],int b[],int x,int y)
{

}

void print_set(int a[],int n)
{
    if(n==0)
        printf("{Φ}");
    else
    {
        printf("{");
        for(int i=0;i<n;i++)
            printf("%d,",a[i]);
        printf("}");
    }
}
