         /* Implementation of Sparse Matrix ADT using array of triplets */

#include<stdio.h>
#include<stdlib.h> //for exit()
#include<stdbool.h> //for bool

//macros
#define MAX_TERMS 101
#define MAX_ROW 10
#define MAX_COL 10

//defining structure
typedef struct Term
{
    int row;
    int col;
    int value;
}Term;

//Global Structure arrays
Term p[MAX_TERMS];
Term q[MAX_TERMS];

//functions prototype
void create_sparse_matrix(Term a[],int maxItems);
void create_sparse_matrix_v2(Term a[],int row,int col,int arr[row][col]);
void input_normal_matrix(int row ,int col,int arr[row][col]);
void print_matrix(Term a[],char name);
void print_normal_matrix(int row,int col,int arr[row][col]);
void transpose(Term a[],Term b[]);
void fast_transpose(Term a[],Term b[]);
void add_sparse_matrix(Term a[],Term b[]);

//main function
int main()
{
    int maxRow,maxCol,maxItems;
    
    while(1)
    {
        int choice;
        printf("\nSelect from following options :\n\n");
        printf("1.Create a sparse matrix\n");
        printf("2.Create a sparse matrix from given normal matrix\n");
        printf("3.Create a sparse matrix from given set of triplets <row,col,value>\n");
        printf("4.Find transpose of sparse matrix\n");
        printf("5.Find transpose of sparse matrix (fast method)\n");
        printf("6.Find addition of two sparse matrix\n");
        printf("7.Print matrix\n");
        printf("8.Exit\n");
        printf("\nEnter your choice :");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1:printf("Enter no of rows :");
                   scanf("%d",&maxRow);
                   printf("Enter no of columns :");
                   scanf("%d",&maxCol);
                   maxItems=maxRow*maxCol;
                   create_sparse_matrix(p,maxItems);
                   printf("Successfully created matrix");
                   break;
            case 2:{printf("Enter no of rows :");
                   scanf("%d",&maxRow);
                   printf("Enter no of columns :");
                   scanf("%d",&maxCol);
                   int arr[maxRow][maxCol];
                   input_normal_matrix(maxRow,maxCol,arr);
                   print_normal_matrix(maxRow,maxCol,arr);
                   create_sparse_matrix(p,maxRow*maxCol);
                   create_sparse_matrix_v2(p,maxRow,maxCol,arr);
                   break;}

            //case 3:break;
            case 4:if(p[0].value==0)
                    {
                        printf("Can't find transpose since p matrix is null");
                    }
                    else
                    {
                        create_sparse_matrix(q,maxItems);
                        transpose(p,q);
                        print_matrix(q,'q');
                        break;
                    }

            //case 5:break;
            case 6:{printf("Enter no of rows of second matrix :");
                   scanf("%d",&maxRow);
                   printf("Enter no of columns of second matrix :");
                   scanf("%d",&maxCol);
                   int arr[maxRow][maxCol];
                   input_normal_matrix(maxRow,maxCol,arr);
                   print_normal_matrix(maxRow,maxCol,arr);
                   create_sparse_matrix(q,maxRow*maxCol);
                   create_sparse_matrix_v2(q,maxRow,maxCol,arr);
                   add_sparse_matrix(p,q);
                   break;}

            case 7:print_matrix(p,'p');
                    break;
            case 8:exit(0);
                   break;
            default:printf("Wrong choice");
                    break;
        }
    }
    return 0;
}

//creates a sparse matrix of size maxitems having each elements value set to 0
void create_sparse_matrix(Term a[],int maxItems)
{
    for(int i=0;i<=maxItems;i++)
    {
        a[i].row=0;
        a[i].col=0;
        a[i].value=0;
    }
}

//creates a sparse matrix from an array
void create_sparse_matrix_v2(Term a[],int row,int col,int arr[row][col])
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

//grants user to input a matrix
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

//prints the normal matrix
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

//prints sparse matrix
void print_matrix(Term a[],char name)
{
    printf("%c[i]  Row Col Value\n",name);
    for(int i=0;i<=a[0].value;i++)
    {
        printf("\n%c[%d] = %d   %d    %d",name,i,a[i].row,a[i].col,a[i].value);
    }
}

//finds transpose of a sparse matrix
void transpose(Term a[],Term b[])
{
    int n,i,j,currentb;
    n=a[0].value;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].value=a[0].value;
    if(n>0)
    {
        currentb=1;
        for(int i=0;i<a[0].col;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[j].col==i)
                {
                    b[currentb].row=a[j].col;
                    b[currentb].col=a[j].row;
                    b[currentb].value=a[j].value;
                    currentb++;
                }
            }
        }
    }

}

//find transpose of a sparse matrix and have less time complexity
void fast_transpose(Term a[],Term b[])
{
    int rowTerm[MAX_COL],startPos[MAX_COL];
    int i,j,numCols=a[0].col;
    int numTerm=a[0].value;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].value=a[0].value;
    if(numTerm>0)
    {
        for(i=0;i<numCols;i++)
         rowTerm[i]=0;
        for(i=1;i<=numTerm;i++)
        {
            rowTerm[a[i].col]++;
            startPos[0]=1;
        }
        for(i=1;i<numCols;i++)
        {
            startPos[i]=startPos[i-1]+rowTerm[i-1];
        }
        for(i=1;i<=numTerm;i++)
        {
            j=startPos[a[i].col]++;
            b[j].row=a[i].col;
            b[j].col=a[i].row;
            b[j].value=a[i].value;
        }
    }
}

//prints addition of two sparse matrix(unsorted)
void add_sparse_matrix(Term a[],Term b[])
{
    Term sum[MAX_TERMS];
    sum[0].row=a[0].row;
    sum[0].col=a[0].col;

    //keeps count of non-zero values for matrix sum
    int n=0;

    //copies the first sparse matrix as it is
    for(int i=1;i<=a[0].value;i++)
    {
            sum[++n].row=a[i].row;
            sum[n].col=a[i].col;
            sum[n].value=a[i].value;
    }

    //traverse through elements of second matrix
    for(int j=1;j<=b[0].value;j++)
    {
        bool isPresent=false;

        //loops over sum matrix to find if second matrix rows and columns already present in sum matrix
        for(int k=1;k<=n;k++)
        {
            //if present the adds their values and sets the isPresent value to true
            if(sum[k].row==b[j].row && sum[k].col==b[j].col)
            {
                sum[k].value+=b[j].value;
                isPresent=true;
                break;
            }
        }

        //if not present then add that triplet to our sum matrix
        if(!isPresent)
        {
            sum[++n].row=b[j].row;
            sum[n].col=b[j].col;
            sum[n].value=b[j].value;
        }
    }

    //set count of non zero values of sum to n
    sum[0].value=n;

    print_matrix(sum,'s');
}
