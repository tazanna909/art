#include<stdio.h>
#include<conio.h>
main()
{char name[20];
float E,N,C,M,P,Tot,per;
printf("enter the name of the student");
scanf("%s",&name);
printf("enter marks of 5 subjects");
scanf("%f,%f,%f,%f,%f",&E,&N,&C,&M,&P);
Tot=E+N+C+M+P;
per=Tot/5;
printf("\n name of student:%s",name);
printf("\n total:%.2f\tpercent:%.2f",Tot,per);
}

