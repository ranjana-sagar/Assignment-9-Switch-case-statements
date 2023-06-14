#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Divisiont");
    printf("\ne. Exit");

    printf("\nEnter your choice:_"); 
    scanf("%c",&x);
    switch(x)
    {
        case 'a':
            printf("\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Sum of %d and %d is %d",a,b,a+b);
            break;
        case 'b':    
            printf("\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        case 'c':
            printf("\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Product of %d and %d is %d",a,b,a*b);
            break; 
        case 'd':
            printf("\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Quotient of %d and %d is %d",a,b,a/b);
            break;
        case 'e':exit(0);    
        default:printf("Invalid choice\n");           
    }//end of switch//
    }//end of while//
    return 0;
}