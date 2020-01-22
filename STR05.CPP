#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s1[10],s2[10];
int x=0;
printf("\nenter first string");
scanf("%s",&s1);
printf("\nenter second string");
scanf("%s",&s2);
x=strcmp(s1,s2);
if (x==0)
printf("\nsame");
else
printf("\nnot same");
getch();
}

