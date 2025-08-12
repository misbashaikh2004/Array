//Write a Program for 1 to N number of Sum And Average
#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0,average;
    printf("enter a no:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum=sum+a[i];
average=sum/n;
printf("%d is sum\n",sum);
printf("%d is average",average);
return 0;
}