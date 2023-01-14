#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,arr[50][50];
    int r,c;
    printf("enter the rows of the array:");
    scanf("%d",&r);
    printf("enter the coloumn of the matrix:");
    scanf("%d",&c);
    
    printf("\nenter the element of the matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthe  matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\nlower triangular matrix is:\n");

    for(i=0;i<r;i++)
    {
         printf("\n");
        for(j=0;j<c;j++)
        {
            if(i>j){
            arr[i][j]=0;
            }
             printf("%d\t",arr[i][j]);
        }
    }
   
    
    return 0;
    
}