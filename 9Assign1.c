#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int m,x;
    while(1)
    {
        printf("\n1. Chech for days of month");
        printf("\n2. Exit");

        printf("\nEnter your choice:_");
        scanf("%d",&x);
        switch(x)
        {
            case 2:exit(1);
            default:printf("Invalid choice\n");break;
            case 1:
                printf("\nEnter the month number:");
                scanf("%d",&m);
               switch(m)
               {  
                case 1:printf("31 dayas in this month(January)\n");break;
                 case 2:printf("28 or29 dayas in this month(Feburary)\n");break;
                 case 3:printf("31 dayas in this month(March)\n");break;
                 case 4:printf("30 dayas in this month(April)\n");break;
                 case 5:printf("31 dayas in this month(May)\n");break;
                 case 6:printf("30 dayas in this month(June)\n");break;
                 case 7:printf("31 dayas in this month(July)\n");break;
                 case 8:printf("31 dayas in this month(August)\n");break;
                 case 9:printf("30 dayas in this month(Sepetember)\n");break;
                 case 10:printf("31 dayas in this mon(October)\n");break;
                 case 11:printf("30 dayas in this month(November)\n");break;
                 case 12:printf("31 dayas in this month(December)\n");break;
                 default:printf("Invalid month number\n");
               } 
        }
    }//end of while
    return 0;
}