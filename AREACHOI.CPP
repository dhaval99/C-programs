#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f,g,h,area;
printf("Area Menu");
printf("\n1.rectangle");
printf("\n2.triangle");
printf("\n3.square");
printf("\nenter your choice\t");
scanf("%d",&a);
if (a==1)
{
printf("\nenter length\t");
scanf("%d",&b);
printf("\nenter breadth\t");
scanf("%d",&c);
area=(b*c);
printf("\narea is %d\t",area);
}
else if (a==2)
{
printf("\nenter base\t");
scanf("%d",&d);
printf("\nenter height\t");
scanf("%d",&e);
area=(0.5*d*e);
printf("\narea is %d\t",area);
}
else if (a==3)
{
printf("\nenter side");
scanf("%d",&f);
area=f*f;
printf("\narea is %d",area);
}
getch();
}

