#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[20];
int len=0;
printf("\nenter one string");
gets(str);
for (len=0;len<20;len++)
{
if (str[len]==' ')
str[len]='-';
}
printf("\n%s",str);
getch();
}
