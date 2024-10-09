
#include<stdio.h>

int main()
{
     int matrix[2][3]={1,2,3,4,5,6},
     transpose[3][2]={0};

     for (int  i = 0; i < 2; i++)
     {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            transpose[j][i]=matrix[i][j];
        }
        
     }

     printf("\nThe matrix is\n");
      
     for (int i = 0; i < 2; i++)
     {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
     }
     printf("\nIts transpose matrix is given below\n");
     
     for (int i = 0; i < 3; i++)
     {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
     }
     

 return 0;
}