#include<stdio.h>
#include<conio.h>
void main()
{
int k,t,i,a[20];
printf("\n enter the values:");
scanf("%d%d",&k,&t);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
if(a[i]==t)
{
printf("\nyes");
}
} getch();
}
