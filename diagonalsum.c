#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],r,c,i,j,k,sum=0;    
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("\n 1 matrix is:\n");
for(i=0;i<r;i++)    
{ 
    printf("\n");   
for(j=0;j<c;j++)    
{    
printf("%d\t",a[i][j]);    
}    
}  
 
printf("\n sum of left diagonal element is :\n");
for(i=0;i<r;i++)        
{   
    sum=sum+a[i][i];
}
printf("%d",sum);

return 0;
}
