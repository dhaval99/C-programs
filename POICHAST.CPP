#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char *name="DELHI";
int length;
char *cptr=name;
printf("%s\n",name);
while(*cptr != '\0')
{
printf("%c is stored at address %u\n",*cptr,cptr);
cptr++;
}
length=cptr-name;
printf("\nLength of the string =%d\n",length);
getch();
}