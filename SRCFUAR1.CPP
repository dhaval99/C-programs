#include<stdio.h>
#include<conio.h>
struct student
{
int r,m[3];
char name[20];
}x[3];

void main()
{
clrscr();
void calc(struct student []);
int i,j;
for (i=0;i<3;i++)
{
printf("\nenter roll no");
scanf("%d",&x[i].r);
printf("\nenter name");
scanf("%s",&x[i].name);
printf("\n enter marks of 3 sub");
for (j=0;j<3;j++)
{
scanf("%d",&x[i].m[j]);
}
}
calc(x);
getch();
}

void calc(struct student x[])
{
float total=0,per;
int i,j;
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
total=total+x[i].m[j];
}
per=total/3;
printf("\ntotal=%f\npercentage=%f",total,per);
total=0;
}
}
