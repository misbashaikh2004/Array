#include<stdio.h>
int main()
{
    int a[100],n,i,j,max,sum=0,min,average,choice,total,pos,key,data;
    
 printf("1.Display Data\n");
 printf("2. Addition\n");
 printf("3.Max no\n");
 printf("4.Min no\n");
 printf("5.Search\n");
 printf("6.sort\n");
 printf("7.Insert\n");
 printf("8.Delete\n");
 printf("9.Average\n");
 printf("10.Exit\n");
 


 printf("enter choice:");
 scanf("%d",&choice);

   
    switch(choice){
        case 1:printf("Array element:");
        scanf("%d",&n);
             for(i=0;i<n;i++)
              scanf("%d",&a[i]);

            printf("given data is \n");
            for(i=0;i<n;i++)

             printf("%d\n",a[i]);
            break;


       case 2:printf("enter  no:");
       scanf("%d",&n);
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        sum=sum+a[i];
        printf("%d is sum\n",sum);
        break;

        case 3:printf("enter no:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++)
       {
       if(max<a[i])
       max=a[i];
}
       printf("maximum is %d\n",max);
       break;


      case 4:printf("enter no:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      min=a[0];
      for(i=1;i<n;i++)
      {
        if(a[i]<min)
        min=a[i];
      }
      printf("minimum no is %d\n",min);
      break;

    //  case 5:printf("");




      case 6:printf("enter a no:");
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

      break;

    // case 7: printf("enter a no:");
    // break;



    case 8:printf("enter a no:");
    scanf("%d",&n);

     for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a no for delete:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
    if(key==a[i])
    {
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
         n--;
         i--;

    }
}
printf("\n After deletion:");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
 break;

      case 9:printf("enter a no:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    average=total/n;
      }
      break;
    

      case 10:printf("Exit\n");
      break;
    
    }
    return 0;
}