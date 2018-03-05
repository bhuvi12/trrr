#include<stdio.h>
int main()
{
int n,j,i,temp,a[20],m;
scanf("%d%d",&m,&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("the smallest number is%d",a[m]);
return 0;
}
}
