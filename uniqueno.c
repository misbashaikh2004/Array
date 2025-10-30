#include<stdio.h>
int main()
{
    int a[100],i,n,k,j;
    printf("enter a no:");
    scanf("%d",&n);

    // printf("enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);


for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[j]==a[i])
        {
        for(k=j;k<n-1;k++)
        a[k]=a[k+1];
         n--;
         j--;
        }
    }
}
printf("\n After:");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}