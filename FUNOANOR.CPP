#include<stdio.h>
#include<conio.h>
void printline(void);
void value(void);
void main()
{
clrscr();
printline();
value();
printline();
getch();
}
void printline(void)
{
int i;
for (i=1;i<=35;i++)
printf("%c",'-');
printf("\n");
}
void value(void)
{
int year,period;
float inrate,sum,principal;
printf("\nprincipal amount");
scanf("%f",&principal);
printf("\ninterest rate");
scanf("%f",&inrate);
printf("\nperiod");
scanf("%d",&period);
sum=principal;
year=1;
while(year <= period)
{
sum=sum*(1+inrate);
year=year+1;
}
printf("\n%8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);
}




