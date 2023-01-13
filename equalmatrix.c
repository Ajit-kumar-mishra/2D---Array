#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,arr1[50][50],arr2[50][50];
    int r,c;
    int count=1;
    printf("enter the rows of the array:");
    scanf("%d",&r);
    printf("enter the coloumn of the matrix:");
    scanf("%d",&c);
    
    printf("\nenter the element of the 1  matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nenter the element of the 2  matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nthe 1 matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
    }
     printf("\nthe 2 matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                count=0;
                break;
            }
        }
    }
    if(count==1)
                printf("THIS IS EQUAL MATRIX\n");
    else
                printf("THIS IS NOT EQUAL MATRIX\n");
    return 0;
}

