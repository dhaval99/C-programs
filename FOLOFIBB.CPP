#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,f=0,s=1,t;
clrscr();
printf("\nhow many numbers\t");
scanf("%d",&n);
printf("\n%d\t%d",f,s);
for (i=1;i<=n-2;i++)
{
t=f+s;
printf("\t%d",t);
f=s;
s=t;
}
getch();
}