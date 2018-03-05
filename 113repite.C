#include<stdio.h>
void main()
{
int k,t,i,a[20],count=0;
printf("\n enter the number");
scanf("%d%d",&k,&t);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
if(a[i]==t)
{
count++;
}
printf("\n",count);
}
}
