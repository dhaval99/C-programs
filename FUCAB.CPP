#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void shape(int);
int j,n;
char r;
clrscr();
printf("\nenter num of rows");
scanf("%d",&n);
shape(n);
getch();
}
void shape(int n)
{
int i,j;
for (i=1;i<=n;i++)
{
for (j=97;j<97+i;j++)
{
printf("%c",j);
}
printf("\n");
}
}