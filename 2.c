//Write a Program for enter marks and display
// #include<stdio.h>
// int main()
// {
//     int marks[3];
//     printf("enter che:");
//     scanf("%d",&marks[0]);

//      printf("enter phy:");
//      scanf("%d",&marks[1]);

//       printf("enter math:");
//      scanf("%d",&marks[2]);

//      printf(" che =%d, phy =%d, math =%d",marks[0],marks [1], marks[2]);
//      return 0;

// }



#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    printf("enter a no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
       if(a[j]>a[j+1])
       {
        int temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;

       }
}
    }
printf("\n After sorting");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
return 0;
    }