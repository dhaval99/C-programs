#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5,m6,total;
float per;
printf("enter the value of maths:");
scanf("%d",&m1);
printf("enter the value of science:");
scanf("%d",&m2);
printf("enter the value of s.s.:");
scanf("%d",&m3);
printf("enter the value of sanskrut:");
scanf("%d",&m4);
printf("enter the value of gujarati:");
scanf("%d",&m5);
printf("enter the value of english:");
scanf("%d",&m6);
total=m1+m2+m3+m4+m5+m6;
printf("your total is %d",total);
per=(total*100)/600;
printf("your per is %d",per);
getch();
}