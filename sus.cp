#include<stdio.h>
#include<conio.h>
main()
{char item[10];
int qty,dr;
float price,np;
printf("enter the item");
scanf("%s,&item");
printf("enter the quantity and discount rate");
scanf("%d,%d",&qty,&dr);
printf("enter the price");
scanf("%f",&price);
np=(qty*price)*(100-dr)/100;
printf("item:%s",item);
printf("\t net payable amount:%f",np);
}
