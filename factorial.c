#include<stdio.h>
int main()
{
int n,i;
int fact=1;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\nfactorial is:%d",fact);
return 0;
}
