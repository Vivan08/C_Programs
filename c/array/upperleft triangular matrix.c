#include<stdio.h>
int main ()
{
     int row,colm,i,j ;
    printf("enter the number of rows and colums in the matrix");
    scanf("%d%d",&row,&colm);
    int arr[row][colm];
     for(j=0;j<row;j++)
    {
        for(i=0;i<colm;i++) 
        {
            printf("enter the element");
            scanf("%d",&arr[j][i]);
        }
    }
     for(j=0;j<row;j++)
        {
        for(i=0;i<colm;i++) 
        {
            if (i+j< row)
            {
                printf("%d", arr[j][i]) ;
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n") ;
        }
    return 0 ;
}