#include<stdio.h>
int main()
{
    int a[100],n,i,key,cnt=0;
    printf("enter the no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

printf("enter element for search:");
scanf("%d",&key);

for(i=0;i<n;i++)
{
    if(a[i]==key){
    cnt++;
}
}
if(cnt == 0)
printf("not found");
else
printf("totol count is %d",cnt);
return 0;
}
