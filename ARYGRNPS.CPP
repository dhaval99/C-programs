
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5],i,n,b=0,c=0;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
if (a[i]>b)
{
b=a[i];
}
}
for (i=0;i<n;i++)
{
if (a[i]==b)
{
c=i;
break;
}
}
printf("\ngrt num=%d",b);
printf("\nposition=%d",c);
getch();
}

