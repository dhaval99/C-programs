#include<stdio.h>
#include<conio.h>
struct student
{
int r;
char name[20];
float m1,m2,m3;
}x;


void main()
{
void calc(struct student);
clrscr();
printf("\nenter roll no");
scanf("%d",&x.r);
printf("\nenter name");
scanf("%s",&x.name);
printf("\n enter marks of 3 sub");
scanf("%f%f%f",&x.m1,&x.m2,&x.m3);
calc(x);
getch();
}

void calc(struct student x)
{
float total,per;
total=x.m1+x.m2+x.m3;
per=total/3;
printf("\ntotal=%f\npercentage=%f",total,per);
}