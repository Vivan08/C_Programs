//WAP to print prime numbers in a range
#include <stdio.h>
int main ()
{
    int start , end , count=0 , divider=1 ;
    printf("enter the startu and end of the range");
    scanf("%d%d",&start,&end);
    while (start<=end)
    {
        count = 0;
        divider = 1;
        while(divider<=start)
        {
            if (start%divider == 0)
            {
                count++ ;
            }
            divider ++;
        }
        if (count == 2)
        {
            printf("%d\t",start);
        }
        start++ ;
    }
    return 0 ;
}    