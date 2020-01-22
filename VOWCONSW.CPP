#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char n;
printf("enter one letter\t");
scanf("%c",&n);
switch (n)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("vowel");
break;
default:
printf("consonant");
}
getch();
}
