#include<stdio.h>
int main()
{
    int a[100],n,i,j,key;
    printf("enter a no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

        n=0;
    printf("after deleting all element\n");
    if(n==0)
    printf("empty");
else{
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
return 0;
}