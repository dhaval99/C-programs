#include<stdio.h>
#include<conio.h>
struct employee
{
char name[10];
int a,b[3];
}x[3];

void main()
{
clrscr();
void calc(struct employee []);
int i,j;
for (i=0;i<3;i++)
{
printf("\nenter employee number");
scanf("%d",&x[i].a);
printf("\nenter name");
scanf("%s",&x[i].name);
printf("\nenter basic salary");
for (j=0;j<3;j++)
{
scanf("%d",&x[i].b[j]);
}
}
calc(x);
getch();
}

void calc(struct employee x[])
{
int sal=0,i,j,e,f,g,h;
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
sal=sal+x[i].b[j];
e=(sal*9)/100;
f=(sal*11)/100;
g=(sal*15)/100;
h=sal+e+f-g;
}
printf("\nhra=%d \nda=%d \npf%d \ntotal salary%d",e,f,g,h);
sal=0;
}
}
