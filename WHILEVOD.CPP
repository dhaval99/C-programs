#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int b=0,c=0,n;
do
{
printf("\nenter a number\t");
scanf("%d",&n);
if (n%2==0 && n>b)
{
b=n;
}
else if (n>c)
{
c=n;
}
}while (n!=0);
printf("\ngrt even num is=%d",b);
printf("\ngrt odd num is=%d",c);
getch();
}







