#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,b=1,s=0;
printf("\n1!+2!+...+n!");
printf("\nenter value  of n\t");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
b=b*i;
s=s+b;
}
printf("sum of series is %d",s);
getch();
}
