#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};
    int arr3[3][3];
    printf("\nwe are going to show  you 2D array subtraction :\n");
    printf("\n1 array is::::\n");

    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
    }
    printf("\n");
    printf("\n2 array is ::::\n");
     for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
 
   }
   printf("\n");
   printf("\nsubtraction of the array is :\n");
   for(i=0;i<3;i++)
   {
    printf("\n");
    for(j=0;j<3;j++)
    {
        arr3[i][j]=arr1[i][j]-arr2[i][j];
        printf("%d\t",arr3[i][j]);
    }
   }
   return 0;

}