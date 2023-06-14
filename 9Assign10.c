#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,D,l;
    float x,y;
    printf("Enter the coefficient of x^2, x and constant of equation:_");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    printf("D=%d\n\n",D);
    l=D>0?1:D==0?2:3;
    switch(l)
    {
        case 1:x=(-b+sqrt(D))/2.0*a;y=(-b-sqrt(D))/2.0*a;printf("Roots of equation are x=%0.1f and y=%0.1f",x,y);break;
        case 2:x=-b/2*a;y=-b/2*a;printf("Roots of equation are x=%0.1f and y=%0.1f",x,y);break;
        default:printf("Roots are imaginary");
    }
    getch();
    return 0;
}