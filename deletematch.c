#include<stdio.h>
int main()
    {
int a[100],n,i,j,key;

printf("enter a no:");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter delete matching element:");
scanf("%d",&key);

for(i=0;i<n;i++)
{
if(key == a[i])
    {
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
         n--;
         i--;
    }
    }
    printf("\n After deletion:\n");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
return 0;
    }
