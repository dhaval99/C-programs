#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct student
{
int r;
char name[20];
float m1,m2,m3;
}x;
//or struct student x;
float total,per;
printf("\nenter roll no");
scanf("%d",&x.r);
printf("\nenter name");
scanf("%s",&x.name);
printf("\n enter marks of 3 sub");
scanf("%f%f%f",&x.m1,&x.m2,&x.m3);
total=x.m1+x.m2+x.m3;
per=total/3;
printf("\ntotal=%f\npercentage=%f",total,per);
getch();
}