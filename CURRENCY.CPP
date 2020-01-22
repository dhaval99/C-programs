#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f,g,h,i,b1,c1,d1,e1,f1,g1,h1,i1,j1;
printf("enter number in rupees");
scanf("%d",&a);
b=a/2000;
b1=a%2000;
c=b1/500;
c1=b1%500;
d=c1/100;
d1=c1%100;
e=d1/50;
e1=d1%50;
f=e1/20;
f1=e1%20;
g=f1/10;
g1=f1%10;
h=g1/5;
h1=g1%5;
i=h1/2;
i1=h1%2;
j1=i1/1;
printf("\n2000=%d \t500=%d \t100=%d\t50=%d \t20=%d \t10=%d \t5=%d \t2=%d \t1=%d",b,c,d,e,f,g,h,i,j1);
getch();
}


