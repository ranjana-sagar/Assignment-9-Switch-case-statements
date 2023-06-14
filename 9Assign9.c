#include<stdio.h>
#include<conio.h>
int main()
{
    int a,x;
    printf("Enter an  even number:_");
    scanf("%d",&a);
    x=a%2?1:0;
    switch(x)
    {
    case 1:printf("%d is not an even number:");break;
    case 0:printf("Nearest upper odd number is %d",a+1);break;
    }
    getch();
    return 0;
}
