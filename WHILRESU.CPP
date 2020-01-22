#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,x,y,z,p;
char a;
do
{
clrscr();
printf("\nenter roll num\t");
scanf("%d",&n);
printf("\nenter sub 1 marks\t");
scanf("%d",&x);
printf("\nenter sub 2 marks\t");
scanf("%d",&y);
printf("\nenter sub 3 marks\t");
scanf("%d",&z);
p=(x+y+z)/3;
printf("pr is %d",p);
if (p>=90)
{
printf("\ngrade is A");
}
else
{
printf("\ngrade is B");
}
flushall();
printf("\nif you want to continue");
scanf("%c",&a);
}while (a=='y');
getch();
}


