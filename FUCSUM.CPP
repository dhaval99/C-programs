#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int sum(int,int);
int a,b,x;
printf("\nenter value of a & b");
scanf("%d%d",&a,&b);
x=sum(a,b);
printf("\nsum=%d",x);
getch();
}
int sum(int p,int q)
{
int r;
r=p+q;
return r;
}
