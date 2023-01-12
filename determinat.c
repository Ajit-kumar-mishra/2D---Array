#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,arr[50][50];
    int r,c;
    long det;
    int x,y,z;
    printf("enter the rows of the matrix:");
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
    if(r==2){
    printf("\n 2*2 matrix determinant ::\n");
    det = (arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]);
    printf("%ld",det);
    }
    if(r==3){
        printf("\n 3*3 matrix determinanat is::\n");
         	
    x = (arr[1][1] * arr[2][2]) - (arr[2][1] * arr[1][2]);
    y = (arr[1][0] * arr[2][2]) - (arr[2][0] * arr[1][2]);
    z = (arr[1][0] * arr[2][1]) - (arr[2][0] * arr[1][1]);
	
	det = (arr[0][0] * x) - (arr[0][1] * y) + (arr[0][2] * z);

    printf("%d",det);
  	
    }
    if(r==2)
    {
        printf("\n\n\n\t\t\tIF YOU WANT 3*3 MATRIX DETERMINANT PLEASE AGAIN RUN THE PROGRAM \n\n");
    }
    if(r==3)
    {
        printf("\n\n\n\t\t\tIF YOU WANT 2*2 MATRIX DETERMINANT PLEASE AGAIN RUN THE PROGRAM \n\n");
    }
    return 0;
}