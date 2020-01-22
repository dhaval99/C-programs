#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a,k;
printf("\nenter number");
scanf("%d",&a);
i=1;
while (i<=10)
{
j=1;
while (j<=a)
{
k=i*j;
printf("\t%d*%d=%d",j,i,k);
j++;
}
i++;
printf("\n");
}
getch();
}
