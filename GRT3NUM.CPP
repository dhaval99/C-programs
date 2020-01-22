#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("enter the third number");
scanf("%d",&c);
if (a>b && a>c)
{
printf("greater number is %d",a);
}
else if (b>a && b>c)
{
printf("greater number is %d",b);
}
else
{
printf("greater number is %d",c);
}
getch();
}