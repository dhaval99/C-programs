#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[20];
int i=0,len,p=0,q=0,r=0,s=0,t=0;
printf("\nenter a string");
scanf("%s",&str);
for (i=0;str[i]!='\0';i++)
{
if (str[i]=='a')
p++;
else if (str[i]=='e')
q++;
else if (str[i]=='i')
r++;
else if (str[i]=='o')
s++;
else if (str[i]=='u')
t++;
}
printf("\nno of a=%d",p);
printf("\nno of e=%d",q);
printf("\nno of i=%d",r);
printf("\nno of o=%d",s);
printf("\nno of u=%d",t);
getch();
}



