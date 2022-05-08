/*      C program to calculates the sum of prices of items   */

#include<stdio.h>

typedef struct Items
{
    int price;
    int quantity;
}Items;

//functions prototype
void input_items(Items item[],int n);
void print_items(Items item[],int n);
int sum_items(Items item[],int n);
int calculate_discount(Items item[],int n);

//main function
int main()
{
    int n;
    printf("Enter number of items :");
    scanf("%d",&n);
    Items item[n];
    input_items(item,n);
    print_items(item,n);
    return 0;
}

//prompts user to input items
void input_items(Items item[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter price and quantity for item %d\n",i+1);
        printf("Price : ");
        scanf("%d",&item[i].price);
        printf("Quantity : ");
        scanf("%d",&item[i].quantity);
    }
}

//prints items,total amount ,discounted amount and grand total
void print_items(Items item[],int n)
{
    int price,quantity,subtotal,total,discount,discountAmount,grandTotal;
    printf("Items   Price   Quantity   Subtotal\n");
    for(int i=0;i<n;i++)
    {
        price=item[i].price;
        quantity=item[i].quantity;
        subtotal=price*quantity;
        printf("Item %-3d %-10d %-6d %4d\n",i+1,price,quantity,subtotal);
    }
    printf("---------------------------------\n");
    total=sum_items(item,n);
    printf("TOTAL : %d\n",total);
    discount=calculate_discount(item,n);
    discountAmount=total*discount/100;
    grandTotal=total-discountAmount;
    printf("DISCOUNT %d%% : -%d\n",discount,discountAmount);
    printf("GRAND TOTAL : %d\n",grandTotal);
    printf("----------------------------------\n");
}

//returns the total amount
int sum_items(Items item[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=item[i].price*item[i].quantity;
    }
    return total;
}

//calculates discount
int calculate_discount(Items items[],int n)
{
    int total=sum_items(items,n);
    if(total<1000)
        return 5;
    if(total>=1000 || total <5000)
        return 10;
    else
        return 15;
}