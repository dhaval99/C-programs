#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a,j;
printf("\nenter num of rows");
scanf("%d",&a);
i=a;
while (i>=1)
{
j=i;
while (j>=1)
{
printf("%d",j);
j--;
}
i--;
printf("\n");
}
getch();
}




