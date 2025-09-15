#include <stdio.h>
int main()
{
 int i , j , key , size ;
 printf("enter the size of the array");
 scanf("%d",&size);
 int arr[size] ;
 for (i=0;i<size;i++)
 {
    printf("enter the elements for the array");
    scanf("%d",&arr[i]);
 }
 printf("orignal array is : \n");
 for (i=0;i<size;i++)
 {printf("%d ",arr[i]);}
 printf("\n");
 for(i=0;i<size;i++)
 {
    key= arr[i];
    j =i-1 ;
    while(j>=0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key ;
 }
 printf("sorted array :\n");
 for(i=0;i<size;i++)
 {printf("%d ",arr[i]);}
 printf("\n") ;
 return 0 ;
}