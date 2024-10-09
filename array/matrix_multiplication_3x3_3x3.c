
#include<stdio.h>

int main()
{
     int m3x3_1[3][3]={1,2,3,4,5,6,7,8,9};
     int m3x3_2[3][3]={1,2,3,4,5,6,7,8,9};
     int result[3][3]={0};
     int j;

    for (int i = 0; i < 3; i++)
     {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            for (int  k = 0;k < 3; k++)
            {
                /* code */
                result[i][j]=result[i][j]+ m3x3_1[i][k]*m3x3_2[k][j] ; 
              
            }
           
        }
       
     }

     for (int  i = 0; i < 3; i++)
     {
        /* code */
        for ( j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",result[i][j]);
        }
        printf("\n");
     }
     
     
 return 0;
}