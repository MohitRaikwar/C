#include<stdio.h>
#include<math.h>

//functions prototype
void input(float arr[],int size);

//main function
int main()
{
    int n;
    float mean=0,variance=0,stdDeviation;
    printf("Enter no. of elements :");
    scanf("%d",&n);
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
      printf("Enter %i element :",i+1);
      scanf("%f",&arr[i]);

  }

}