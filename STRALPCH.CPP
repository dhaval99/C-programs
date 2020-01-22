#include<stdio.h>
#include<conio.h>
#include<string.h>
#define items 5
#define maxchar 20
void main()
{
clrscr();
char string[items][maxchar],dummy[maxchar];
int i=0,j=0;
printf("\nenter names of %d items",items);
while(i<items)
scanf("%s",string[i++]);
for(i=1;i<items;i++)
{
for(j=1;j<=items-i;j++)
{
if(strcmp(string[j-1],string[j])>0)
{
strcpy(dummy,string[j-1]);
strcpy(string[j-1],string[j]);
strcpy(string[j],dummy);
}
}
}
printf("\n alphabatical order");
for (i=0;i<items;i++)
{
printf("\n%s",string[i]);
}
getch();
}

