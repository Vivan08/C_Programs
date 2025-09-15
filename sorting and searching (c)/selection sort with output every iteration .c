#include <stdio.h>
int main()
{
    int size,i,j,temp,k;
    printf("input the size of array ");
    scanf("%d",&size);
    int arr[size] ;
    for (i=0;i<size;i++)
    {
        printf("enter the elements for the array ");        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            for (k=0;k<size;k++)
            {
             printf("%d",arr[k]);
             printf("\n") ;
            }
            if (arr[i]>arr[j])
            {
               temp = arr[i] ;
               arr[i] = arr[j] ;
               arr[j] = temp ;
                for (k=0;k<size;k++)
                {
                 printf("%d",arr[k]);
                 printf("\n") ;
                }
            }
            
        }
    }
    return 0 ;
}