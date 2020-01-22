#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
clrscr();
printf("\nenter first string");
scanf("%s",&s1);
printf("\nenter second string");
scanf("%s",&s2);
strcat(s1,s2);
printf("\n%s",s1);
getch();
}


