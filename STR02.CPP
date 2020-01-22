#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[20];
int len,i=0;
printf("\nEnter a string");
gets(str);
for (len=0;str[len]!='\0';len++)
{
i++;
}
printf("\nlength=%d",i);
getch();
}
