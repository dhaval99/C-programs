#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,b=0;
do
{
printf("\nenter a number");
scanf("%d",&n);
if(n>b)
b=n;
}while(n!=0);
printf("greater num is=%d",b);
getch();
}

