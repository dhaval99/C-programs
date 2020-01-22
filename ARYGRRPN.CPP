#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a[5],b=0,c=0,ocr;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
if (a[i]>b)
{
b=a[i];
}
}
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
if(a[i]==b)
{
c++;
}
}
printf("\ngrt num=%d",b);
printf("\noccuration=%d",c);
getch();
}