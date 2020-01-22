#include<stdio.h>
#include<conio.h>
void main()
{
double power(int,int);
int x,y;
printf("enter x,y");
scanf("%d%d",&x,&y);
printf("\nresult is %f",power(x,y));
}
double power (int x,int y)
{
double p;
p=1.0;
if (y>0)
while (y--)
p=p*x;
else
while (y++)
p=p/x;
return(p);
}