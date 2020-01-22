#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,b1,c1,d1;
printf("enter number");
scanf("%d",&a);
b=a/3600;
b1=a%3600;
c=b1/60;
c1=b1/60;
d1=c1%60;
printf("\nhours=%d \tminutes=%d \tseconds=%d",b,c,d1);
getch();
}
