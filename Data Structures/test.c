#include<stdio.h>
void print_arr(int m,int n,int arr[m][n]);
void input_arr(int m,int n,int arr[m][n]);

typedef struct Term
{
    int row;
    int col;
    int value;
}term;
void create_sparse_matrix(term t[],int maxItems);
void transpose(term t[],term b[]);
void create_sparse_matrix_v2(term t[],int row,int col,int arr[row][col]);
void print_matrix(term t[]);
int main()
{
    int m,n;
    printf("Enter no of rows :");
    scanf("%d",&m);
    printf("Enter no of columns :");
    scanf("%d",&n);
    int total=m*n;
    term a[total];
    create_sparse_matrix(a,total);
    int arr[m][n];
    input_arr(m,n,arr);
    print_arr(m,n,arr);
    create_sparse_matrix_v2(a,m,n,arr);
    print_matrix(a);
    term b[total];
    create_sparse_matrix(b,total);
    transpose(a,b);
    print_matrix(b);

    return 0;

}

void print_arr(int m,int n,int arr[m][n])
{
        for(int i=0;i<m;i++)
    {

        for(int j=0;j<n;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");

    }
}
void input_arr(int m,int n,int arr[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void create_sparse_matrix(term t[],int maxItems)
{
    for(int i=0;i<=maxItems;i++)
    {
        t[i].row=0;
        t[i].col=0;
        t[i].value=0;
    }
}
void create_sparse_matrix_v2(term a[],int row,int col,int arr[row][col])
{
    int count=0;

    //This loops over the normal matrix to count non-zero values
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]!=0)
            count++;
        }
    }

    // a[0] stores the no. of rows and no. of columns and count of non-zero values(in short 'metadata')
    a[0].row=row;
    a[0].col=col;
    a[0].value=count;

    //assigning values to triplets ordered by row and within rows by column
    int n=1;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(arr[i][j]!=0)
                {
                    a[n].row=i;
                    a[n].col=j;
                    a[n].value=arr[i][j];
                    n++;
                }
            }

        }
    }
void input_normal_matrix(int row ,int col,int arr[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void print_normal_matrix(int row,int col,int arr[row][col])
{
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(term t[],term b[])
{
    int n,i,j,currentb;
    n=t[0].value;
    b[0].row=t[0].col;
    b[0].col=t[0].row;
    b[0].value=t[0].value;
    if(n>0)
    {
        currentb=1;
        for(int i=0;i<t[0].col;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(t[j].col==i)
                {
                    b[currentb].row=t[j].col;
                    b[currentb].col=t[j].row;
                    b[currentb].value=t[j].value;
                    //printf("\nb[%d]  %d  %d  %d \n",currentb,b[currentb].row,b[currentb].col,b[currentb].value);
                    currentb++;
                }
            }
        }
    }

}
void print_matrix(term t[])
{
    printf("a[i]  Row Col Value\n");
    for(int i=0;i<=t[0].value;i++)
    {
        printf("\na[%d] = %d   %d    %d",i,t[i].row,t[i].col,t[i].value);
    }
    printf("\n");
}