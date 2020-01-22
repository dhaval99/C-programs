#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
printf("enter one character\t");
scanf("%c",&a);
if (a>=65 && a<=90)
{
printf("\ncharacter is uper case");
}
else if (a>=97 && a<=122)
{
printf("\ncharacter is lower case");
}
else if (a>=48 && a<=57)
{
printf("\ncharacter is number");
}
else
{
printf("\ncharacter is special");
}
getch();
}




