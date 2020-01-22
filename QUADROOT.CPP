#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,d,delta,root1,root2;
printf("\nenter the value of a");
scanf("%f",&a);
printf("\nenter the value of b");
scanf("%f",&b);
printf("\nenter the value of c");
scanf("%f",&c);
delta=(b*b-4*a*c);
d=sqrt(delta);
root1=(-b+d)/(2*a);
root2=(-b-d)/(2*a);
if (delta > 0)
{
printf("\nroot1 is %f \troot2 is %f",root1,root2);
}
else if (delta == 0)
{
printf("\nroot1 and root2 is %f",root1);
}
else
{
printf("no roots are possible");
}
getch();
}