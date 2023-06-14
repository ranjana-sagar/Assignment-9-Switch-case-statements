#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    int x;
    printf("Enter a Positive or Negative number:_");
    scanf("%f",&a);
    x=a>0?1:a<0?2:0;
    switch(x)
    {
        case 1:printf("Number=%.1f\n",a);printf("converted no=%.1f",a-(a*2));break;
        case 2:printf("Number=%.1f\n",a);printf("converted number=%.1f",a+(a*-2));break;
        default:printf("Zero is not positive or nrgative number");
    }
    getch();
    return 0;
}