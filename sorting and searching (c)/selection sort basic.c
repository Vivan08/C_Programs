#include <stdio.h>
int main()
{
    int size,i,j,temp;
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
            if (arr[i]>arr[j])
            {
               temp = arr[i] ;
               arr[i] = arr[j] ;
               arr[j] = temp ;
            }
            
        }
    }
    for (i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t") ;
    }
    return 0 ;
}