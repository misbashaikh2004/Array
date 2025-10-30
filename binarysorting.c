
#include<stdio.h>
int main()
{
    int a[100],i,n,j;
    int flag=1;
    printf("enter a no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
i=0;
while(flag)
{
    flag=0;
    for(j=0;j<n-i-1;j++){
        if(a[j+1]>a[j])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
    }
    for(j=0;j<n;j++)
    printf("%d",a[j]);
printf("\n");
i++;
}
printf("\n After sorting\n");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}
