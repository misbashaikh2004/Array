#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    int flag=1;
    // int l,h,key;

    printf("enter a N:");
    scanf("%d",&n);

    printf("enter array  elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    i=0;
    while(flag)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        i++;
    }
    printf("\n after sorting\n");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);

    int l=0,h=n-1,key,mid;
    printf("\nenter key:");
    scanf("%d",&key);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
        {
            printf("found");
            return 0;
        }
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
    }
    printf("not found");
}

