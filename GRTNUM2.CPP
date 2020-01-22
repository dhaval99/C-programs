#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
if (a>b)
{
printf("greater number is %d",a);
}
else if (a<b)
{
printf("greater number is %d",b);
}
getch();
}

