#include<stdio.h>
#include<conio.h>
int main()
{
    short int x;
    printf("Enter the day number of week:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("hello! Today is Monday");break;
        case 2:printf("hello! Today is Tuesday");break;
        case 3:printf("hello! Today is Wednesday");break;
        case 4:printf("hello! Today is Thuresday");break;
        case 5:printf("hello! Today is Friday");break;
        case 6:printf("hello! Today is Saturday");break;
        case 7:printf("hello! Today is Sunday");break;
        default:printf("Invalid day number");
    }
    getch();
    return 0;
}