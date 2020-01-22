#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[20],str1[20];
int i,j=0,len;
printf("\nenter one string");
scanf("%s",&str);
len=strlen(str);
for (i=len-1;i>=0;i--)
{
str1[j]=str[i];
j++;
}
str1[j]='\0';
printf("\nReverse string=%s",str1);
getch();
}