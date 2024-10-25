<<<<<<< HEAD
#include<stdio.h>
#pragma pack(1)

typedef struct untity
{
    double i;
    char c;
    int j;
}wow;

int main()
{
     printf("%d",sizeof(wow));

=======
#include<conio.h>
#include<stdio.h>

int main()
{
    int i,first,final,even=0,odd=0;
    int j=0,even_sum=0,odd_sum=0;
    scanf("%d%d",&first,&final);
    ++final;
     for ( i = first; i <= final ; i++)
     {
        /* code */
        if (i%2==0)
        {
            /* code */
            
            even++;
            even_sum+=i;
        }
        else
        {
            
            odd++;
            odd_sum+=i;
        }
       
        
     }
    printf("Even= %d",even);
    printf("\n Odd= %d",odd);
    printf("\n The sum of the even number is %d",even_sum);
    printf("\n The sum of the odd number is %d",odd_sum);
>>>>>>> 082876d3a61262409f992da9ce484522adeb6c74
 return 0;
}