//Write A Program to kFind Maximum Number
#include<stdio.h>
int main()
{
    int a[100],n,i,max;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
max=a[0];
for(i=1;i<n;i++)
{
    if(max<a[i])
    max=a[i];
}
printf("maximum is %d",max);
return 0;
}