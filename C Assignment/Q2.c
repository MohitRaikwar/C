/*  C program to calculate the mean, variance and standard deviation on a set of values   */

#include<stdio.h>
#include<math.h>

//functions prototype
void input(float arr[],int size);

//main function
int main()
{
    int n;
    float mean=0,variance=0,stdDeviation;
    do
    {
        printf("Enter no. of elements :");
        scanf("%d",&n);
    } while (n<1);
    float arr[n];
    input(arr,n);

    //calculates sum of all values in array
    for(int i=0;i<n;i++)
    {
        mean+=arr[i];
    }
    mean/=n;
    for(int i=0;i<n;i++)
    {
        variance+=pow((arr[i]-mean),2);
    }
    variance/=n;
    stdDeviation=sqrt(variance);
    printf("Mean = %.2f\n",mean);
    printf("Variance = %.2f\n",variance);
    printf("Standard deviation = %.2f\n",stdDeviation);
    return 0;

}

//grants user to enter array elements
void input(float arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%f",&arr[i]);
    }
}