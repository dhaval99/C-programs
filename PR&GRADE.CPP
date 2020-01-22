#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,total,pr;
printf("\nenter marks of maths");
scanf("%d",&a);
printf("\nenter marks of physics");
scanf("%d",&b);
printf("\nenter marks of chemistry");
scanf("%d",&c);
total=a+b+c;
pr=(a+b+c)/3;
printf("\ntotal marks are %d \tpr is %d",total,pr);
if (pr>90)
{
printf("\tgrade is A");
}
else if (pr<90 && pr>90)
{
printf("grade is B");
}
else
{
printf("grade is C");
}
getch();
}