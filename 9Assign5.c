#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("Good");break;
        case 2:printf("Better");break;
        case 3:printf("Best");break;
        default:printf("Invalid");
    }
    printf("\n");
    getch();
    return 0;
}