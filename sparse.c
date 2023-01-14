#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count=0,point=0;
    int i,j,r,c,arr[50][50];
printf("\nenter the rows of the matrix:\n");
scanf("%d",&r);
printf("\nenter the coloumn of the matrix:\n");
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            count++;
            else
            point++;
        }
    }
   if(count>point){
   printf("\t\t\t\nTHIS IS SPARSE MATRIX:\n");
   printf("\t\t\t\nTHERE IS %d NUMBER OF ZEROES IN THE MATRIX",count);
   }
   else{
   printf("\t\t\t\nTHIS IS  NOT SPARSE MATRIX:\n");
   }
    return 0;
}