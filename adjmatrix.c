#include<stdio.h>
int main(){
    int a[100][100],n,i,j;
    int ch;
    int fromVertex, toVertex;

printf("Enter n No of vertex:");
scanf("%d",&n);

for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    
    a[i][j]=0;
    }

    while(1)
    {
        printf("Enter From vertex:");
        scanf("%d",&fromVertex);
        printf("Enter to vertex:");
        scanf("%d",&toVertex);

        a[fromVertex][toVertex]=1;
        a[toVertex][fromVertex]=1;

        printf("Wants to continue(1/0):");
        scanf("%d",&ch);
        if(ch==0)
        break;
    }
    
    printf("\n\nGraph is :\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}