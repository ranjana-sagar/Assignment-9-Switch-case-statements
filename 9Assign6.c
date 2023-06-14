#include<stdio.h>
#include<conio.h>
int main()
{
    int y,x;
    printf("Enter the year:");
    scanf("%d",&y);
    x=y%100?y%4?1:0:y%400?1:0;
    switch(x)
    {
        case 1:printf("%d is not a leap year",y);break;
        case 0:printf("%d is a leap year",y);break;
        default:printf("Invalid year");
    }
    getch();
    return 0;
}