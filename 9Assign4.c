#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float a,b,c;
    char x;
    while(5)
    {
        printf("\na. Check given Triangle is isosceles or not.");
        printf("\nb. Check given Triangle is Right Angled Triangle or not.");
        printf("\nc. Check given Triangle is equilateral Triangle or not.");
        printf("\nd. Exit");
        printf("\nEnter your choice:_");
        scanf("%c",&x);
        switch(x)
        {
            case 'a':
                printf("\nEnter the lengths of the triangle:_");
                scanf("%f%f%f",&a,&b,&c);
                printf(a==b||a==c||b==c?"lengths of an isosceles triangle\n":"Not isosceles triangle\n");
                break;
            case 'b':
                printf("\nEnter the lengths of hypotenuse ,perpendicular and base of the triangle:_");
                scanf("%f%f%f",&a,&b,&c);
                printf(a*a==b*b+c*c?"Right Angled Triangle\n":"not right angled triangle\n");
                break;
            case 'c':
                printf("\nEnter the length of the Triangle:");
                scanf("%f%f%f",&a,&b,&c);
                printf(a==b&&a==c?"Equilateral triangle\n":"not equilateral triangle\n");
                break;
            case 'd':exit(0);      
            default:printf("Invalid choice\n");    
        }//end of switch//
    }//end of while//
    getch();
    return 0;
}