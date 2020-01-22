#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a,e,i,o,u;
printf("\nenter one letter\t");
scanf("%c",&a);
if (a=='a'||  a==e ||  a==i || a==o || a==u)
{
printf("\nletter is vowel");
}
else
{
printf("\nletter is consonant");
}
getch();
}