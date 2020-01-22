#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int num[10],sum1=0,sum2=0,e,f,g,am,i,n;
printf("how many numbers");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter number %d",i+1);
scanf("%d",&num[i]);
sum1=sum1+num[i];
}
am=sum1/n;
for (i=0;i<n;i++)
{
sum2=sum2+(num[i]-am);
}
e=sum2*sum2;
f=e/n;
g=sqrt(f);
printf("aithmetic mean=%d\nstandard deviation=%d\n",am,g);
getch();
}