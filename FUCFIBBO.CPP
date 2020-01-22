#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void fibbo(int);
int n,x,f=0,s=1;
printf("\nhow many numbers");
scanf("%d",&n);
printf("\n%d\t%d",f,s);
fibbo(n);
getch();
}
void fibbo(int n)
{
int f=0,s=1,i,t;
for (i=1;i<=n-2;i++)
{
t=f+s;
printf("\t%d",t);
f=s;
s=t;
}
}