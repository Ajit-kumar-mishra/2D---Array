#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,arr[50][50];
    int r,c;
    int count=0;
    int point=0;
    printf("enter the rows of the array:");
    scanf("%d",&r);
    printf("enter the coloumn of the matrix:");
    scanf("%d",&c);
    
    printf("\nenter the element of the 1  matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nthe matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
    if(arr[i][j]%2==0)
    {
        count++;
    }
    else
    {
    point++;
    }
        }
    }
    printf("\n\n EVEN NUMBER IN THIS MATRIX  IS %d\n",count);
    printf("\n\n ODD NUMBER IN THIS MATRIX IS %d\n",point);
    return 0;
}

