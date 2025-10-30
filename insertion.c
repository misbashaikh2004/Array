#include<stdio.h>
int main()
{
    int a[100],i,n,pos,data;
    printf("enter a no:");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter position:");
    scanf("%d",&pos);

     if(pos<=0||pos>n)
     {
        printf("Invalid position");
        return 0;
     }
printf("enter a data");
scanf("%d",&data);
 
for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos-1]=data;
n++;

printf("\n After insertion");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
}

