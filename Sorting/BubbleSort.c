#include<stdio.h>
#include<stdbool.h>
//Functions prototype 
void Bubble_Sort(int arr[],int size);
void input(int*,int);
void swap(int *a,int *b);
void print(int arr[],int size);
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%i",&size);  
    int arr[size];
    input(arr,size);
    printf("Before sorting\n");
    print(arr,size); 
    Bubble_Sort(arr,size);
    printf("After sorting\n");
    print(arr,size);
  
}
void Bubble_Sort(int arr[],int size)
{
    bool swapped;
    for(int i=0;i<size-1;i++)     //size-1 for unnecessary going for last+1 element in j loop
    {
        
        
        for(int j=0;j<(size-i-1);j++)
        {
            swapped=false;
            if(arr[j]>arr[j+1])  //Searching for minimum no. and then updating it
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            
            }
        
        }
       //Swapping minimum element to i th index
       printf("After %i pass\n",i+1);
       print(arr,size);
       //If no elements were swapeed 
       if(swapped==false)  
       break;
    }
}
void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
      printf("%i  ",arr[i]);
    }
    printf("\n");
}
void input(int arr[],int size)
{
   
    for(int i=0;i<size;i++)
  {
      printf("Enter %i element :",i+1);
      scanf("%i",&arr[i]);
     
  }
 
}