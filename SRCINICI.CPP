#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct student
{
int rollno,pr;
char name[10];
float m1,m2,m3;
};
struct student s1={1,12,"ravi",12,12,12};
struct student s2={2,13,"dhaval",13,13,13};
struct student s3={3,14,"rahul",14,14,14};
printf("\nroll no is %d",s1.rollno);
printf("\npr is %d",s1.pr);
printf("\nname is %s",s1.name);
printf("\nsub  1 marks is %f",s1.m1);
printf("\nsub  2 marks is %f",s1.m2);
printf("\nsub  3 marks is %f",s1.m3);
getch();
}
