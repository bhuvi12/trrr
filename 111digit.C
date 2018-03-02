#include<stdio.h>
#include<conio.h>
void main()
{
int n,count;
printf("\n enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
printf("\n number of digits are:",count);
}
getch();
}
