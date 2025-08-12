//Write a Program for 1 to N number of Sum
#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
   printf("enter a no:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("%d is sum\n",sum);
return 0;
}