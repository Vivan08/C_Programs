#include<stdio.h>
int main()
{
    int row,colm,i,j,target,flag=0 ;
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
    printf("enter the element to search for");
    scanf("%d",&target);
   for(j=0;j<row;j++)
    {
        for(i=0;i<colm;i++) 
        {
            if(arr[j][i] == target)
            {
                printf("element found at %d row and %d coloum",row,colm);
                flag++;
                break;
            }
        }
        if(flag==1)
        {

            break ;
        }
    }
    if (flag == 0)
    {
         printf("element not found");
    }
    return 0 ;   
}