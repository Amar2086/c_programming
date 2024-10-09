
#include<stdio.h>

int main()
{
     int arr[2][3]={23,34,45,24,56,25};

     int arr2[3][2]={2,3,4,5,6,7};

     int result[2][2]={0};

     for (int  i = 0;i < 2; i++)

     {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            for (int  k = 0; k <3 ; k++)
            {
                /* code */
                result[i][j]+=arr[i][k]*arr2[k][j];
            }
            
        }
        
     }
     for ( int i = 0; i < 2; i++)
     {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            printf("%d\t",result[i][j]);
            
        }
        printf("\n");
        
     }
     
     



 return 0; 
}