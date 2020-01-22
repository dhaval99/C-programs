#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[20];
int i=0,len,s=0;
printf("\nenter a string");
scanf("%s",&str);
for (i=0;str[i]!='\0';i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
{
s++;
}
}
printf("\nvowels=%d",s);
getch();
}




