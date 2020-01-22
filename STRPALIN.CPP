#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s1[10],s2[10];
int i,j=0,len;
printf("\nenter one string");
scanf("%s",&s1);
len=strlen(s1);
for (i=len-1;i>=0;i--)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
if (strcmp(s1,s2)==0)
printf("\npalindrome");
else
printf("\nnot palindrome");
getch();
}





