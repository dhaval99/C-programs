#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=1,j=1,a;
printf("enter number of rows");
scanf("%d",&a);
while (i<=a)
{
j=1;
while (j<=i)
{
printf("%d",j);
j++;
}
i++;
printf("\n");
}
getch();
}
