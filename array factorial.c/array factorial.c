#include <stdio.h>
#define max_digits 1000
int main()
{
    int num;
    printf("enter the number to calculate its factorial");
    scanf("%d",&num);
    if (num <0 )
    {
        printf("the factorial of thr number is not possible as the number is negetive");
        return 0;
    }
    int result[max_digits] ;
    result[0] = 1;
    int size = 1;
    for (int i = 2; i <= num; i++)
    {
        int carry = 0;
        for(int j =0 ; j < size;j++)
        {
            int product = result[j]*i+carry ;
            result[j] = product % 10 ;
            carry = product/10 ;

        }
        while(carry)
        {
            result[size] = carry % 10 ;
            carry = carry / 10 ;
            size++;
        }
    }
    printf("Factorial of the number %d is :\n",num);
    for (int i = size-1;i>= 0;i--)
    {
        printf("%d",result[i]);
    }
    printf("\n");
    return 0 ;
}