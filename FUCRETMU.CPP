#include<stdio.h>
#include<conio.h>
void math (int x,int y,int *s,int *d);
void main()
{
int x=20,y=10,s,d;
math(x,y,&s,&d);
printf("\ns=%d\nd=%d",s,d);
}
void math(int a,int b,int *sum,int *diff)
{
*sum=a+b;
*diff=a-b;
}
