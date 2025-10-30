// // //Write a Program For Linear Search
// #include<stdio.h>
// int main()
// {
//     int a[100],n,i,key;
//     printf("enter the no:");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);

// printf("enter element for search:");
// scanf("%d",&key);

// for(i=0;i<n;i++)
// {
//     if(a[i] == key)
//     {
//         printf("found");
//     break;
// }

// if(a[i]==n)
// printf("not found");
// }
// return 0;
// }

#include<stdio.h>
int main(){
    int a[100],i,n,data;
    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Search the element:");
    scanf("%d",&data);

    for(i=0;i<n;i++){
        if(a[i]==data)
        {
            printf("Element found at pos:%d",i+1);
            //  printf("Element found at index:%d",i);
            break;
        }
            }
  
        if(i==n){
            printf("element not found");
  }
    return 0;
}