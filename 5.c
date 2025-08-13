#include<stdio.h>
int main()
{
    int a[100],i,n,key;
    printf("enter a no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter search element:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        break;
    }
    if(i == n)
    printf("not found");
else
printf("found in %d position",i+1);
return 0;
}