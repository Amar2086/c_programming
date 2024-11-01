#include<stdio.h>

int main()
{
     int remainder, number,reversed_number=0,number1;
     scanf("%d",&number1);
     number=number1;
     for ( ; number!=0; number=number/10)
     {
        /* code */
        remainder=number%10;
        reversed_number=reversed_number* 10+remainder;
     }
     
     if (reversed_number==number1)
     {
        printf("%d is a palindrome number of %d", reversed_number,number1);
     }
     else
     {
        /* code */
        printf("It is not a palindrome number ");
     }
     
     

 return 0;
}