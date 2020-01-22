#include<stdio.h>
#include<conio.h>

void main()
{
int fact(int);
int n,x;
clrscr();
printf("\n Enter one number :");
scanf("%d",&n);
x=fact(n);
printf("\n Factorial of %d is %d",n,x);
getch();
}


int fact (int n)
{
int f;
if (n==0)
return 1;
else
f=n*fact(n-1);
return f;
}
