#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s1[10],s2[10];
printf("\nenter first string");
scanf("%s",&s1);
printf("\nenter second string");
scanf("%s",&s2);
strcpy(s1,s2);
printf("\n%s",s1);
getch();
}
