#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[20];
int i=0;
printf("\nenter one string");
scanf("%s",&str);
while (str[i]!='\0')
{
if (str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
i++;
}
printf("\n%s",str);
getch();
}







