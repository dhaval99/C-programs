#include<stdio.h>
#include<conio.h>
struct invent
{
char *name[20];
int number;
int price;
};
void main()
{
clrscr();
struct invent product[3],*ptr;
printf("INPUT\n\n");
for (ptr=product;ptr<product+3;ptr++)
scanf("%s%d%d",&ptr->name,&ptr->number,&ptr->price);
printf("\nOUTPUT\n\n");
ptr=product;
while(ptr<product+3)
{
printf("%-20s %5d %10d\n",ptr->name,ptr->number,ptr->price);
ptr++;
}
getch();
}