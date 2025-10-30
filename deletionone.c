#include<stdio.h>
int main()
{
    int a[100],i,n,key,j;
    printf("enter a no:");
    scanf("%d",&n);

     for(i=0;i<n;i++)
    scanf("%d",&a[i]);

printf("enter a no for delete:");
scanf("%d",&key);

for(i=0;i<n;i++)
{
    if(key==a[i])
    {
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
         n--;
         break;

    }
}
printf("\n After deletion:");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}