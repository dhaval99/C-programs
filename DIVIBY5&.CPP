#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter number\t");
scanf("%d",&a);
if (a%5==0 && a%11==0)
{
printf("number is divisible by 5 and 11");
}
else
{
printf("number is not divisible by 5 and 11");
}
getch();
}