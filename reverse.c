#include<stdio.h>
int main()
{
    int a[100],i,n,j;
    printf("enter a no:");
    scanf("%d",&n);

     for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\n After reverse:");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}