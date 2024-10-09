#include<conio.h>
#include<stdio.h>

int main()
{
     int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    

     for (int  i = 0; i < 3; i++)
     {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
     }
     

 return 0;
}