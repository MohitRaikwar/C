#include<stdio.h>
int binary(int arr[],int l,int r,int num);
int main()
{
    int arr[]={1,2,3,4,5};
    int num;
    printf("Enter any no. to search :"); 
    scanf("%i",&num);
    printf("Entered no. is :%i\n",num);
    int result = binary(arr,0,sizeof(arr)/sizeof(int),num);
    if(result==-1)

     printf("%i is not found..",num);
    
    else
     printf("%i is found at index :%i\n",num,result);
    return 0;

}
int binary(int arr[],int l,int r,int num)
{
        if(r>l)               //Condition to quit
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==num)
            return mid;
        
         if(arr[mid]>num)
         return binary(arr,l,mid-1,num);
         else
         return binary(arr,mid+1,r,num);
        }
        return -1;

}