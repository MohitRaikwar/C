#include<stdio.h>
//Functions prototype 
void Selection_Sort(int arr[],int size);
void input(int*,int);
void swap(int *a,int *b);
void print(int arr[],int size);
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);  
    int arr[size];
    input(arr,size);
    printf("Before sorting\n");
    print(arr,size); 
    Selection_Sort(arr,size);
    printf("After sorting\n");
    print(arr,size);
  
}
void Selection_Sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)     //size-1 for unnecessary going for last+1 element in j loop
    {
        
        int min_index=i;
        for(int j=i+1;j<size;j++)    //First i elements are already sorted
        {
            if(arr[j]<arr[min_index])  //Searching for minimum no. and then updating min_index
            
               min_index=j;
            
        }
     swap(&arr[i],&arr[min_index]);  //Swapping minimum element to i th index
     printf("After pass %d \n",i+1);
       print(arr,size); 
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
      printf("%d  ",arr[i]);
    }
    printf("\n");
}
void input(int arr[],int size)
{
   
    for(int i=0;i<size;i++)
  {
      printf("Enter %d element :",i+1);
      scanf("%d",&arr[i]);
     
  }
 
}