//Write a Program For Binary Search
#include<stdio.h>
int main()
{
    int a[100],n,i,key;
    printf("enter the no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

printf("enter element for search:");
scanf("%d",&key);

for(i=0;i<n;i++)
{
    if(a[i] == key){
    break;
}
}
if(a[i]==n)
printf("not found");
else
printf("found");
return 0;
}
