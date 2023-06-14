#include<stdio.h>
#include<conio.h>
int main()
{
    int u,x;
    float tb;
    printf("Enter the total unit of electricty consumption:_");
    scanf("%d",&u);
    x=u<=50?1:u<=150?2:u<=250?3:4;
    switch(x)
    {
        case 1:tb=u*0.50;printf("Total bill=%0.2f",tb+tb*0.2);break;
        case 2:tb=25+(u-50)*0.75;printf("Total bill=%0.2f",tb+tb*0.2);break;
        case 3:tb=25+75+(u-150)*1.20;printf("Total bill=%0.2f",tb+tb*0.2);break;
        case 4:tb=25+75+120+(u-250)*1.50;printf("Total bill=%0.2f",tb+tb*0.2);break;
        default:printf("Invalid unit");
    }
    printf("\n");
    getch();
    return 0; 
}