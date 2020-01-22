#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int res(int,int);
int a,b,x;
printf("\nenter base and power");
scanf("%d%d",&a,&b);
x=res(a,b);
printf("\n ans=%d",x);
getch();
}
int res(int a,int b)
{
int r=1,i;
for (i=1;i<=b;i++)
{
r=r*a;
}
return r;
}

