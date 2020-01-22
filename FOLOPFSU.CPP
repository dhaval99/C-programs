#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c=1,s=1,i,x,n;
printf("\n1+x^1+x^2+...x^n");
printf("\nenter x\t");
scanf("%d",&a);
printf("\nenter n\t");
scanf("%d",&b);
for (i=1;i<=b;i++)
{
c=c*a;
s=s+c;
}
printf("answer is %d",s);
getch();
}