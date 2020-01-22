#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int *p,sum=0,i;
int x[5]={5,9,6,3,7};
i=0;
p=x; /*initializing with base address of x*/
printf("element value address\n\n");
while(i<5)
{
printf("x[%d] %d %u\n",i,*p,p);
sum=sum+*p; /*accessing array element */
i++,p++; /*incrementing pointer */
}
printf("\n Sum = %d\n",sum);
printf("\n &x[0] = %u\n",&x[0]);
printf("\n p = %u\n",p);
getch();
}

