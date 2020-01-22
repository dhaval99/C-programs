#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int b=0,i,n;
printf("\nenter a number\t");
scanf("%d",&n);
for (i=2;i<n;i++)
{
if (n%i==0)
{
b=1;
break;
}
}
if (b==0)
{
printf("\nprime");
}
else
{
printf("\nnot prime");
}
getch();
}

