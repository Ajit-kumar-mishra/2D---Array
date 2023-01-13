#include<stdio.h>
int main()
{
    int i,j,arr[3][3]={2,1,5,9,3,4,6,7,8};
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);

        }
    }
    return 0;
}