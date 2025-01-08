#include<stdio.h>

int main()
{
     int matrix1[2][3]={{2,3,1},{5,6,4}};
     int matrix2[2][3]={2,3,4,4,6,7};
    int result[2][3]={0};

    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j< 3; j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int notlower=0;
    int arr[3][3]={{1,2,3},
                   {0,5,3},
                   {0,0,9} };
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {

            printf("%d\t",arr[i][j]);
            if (i>j)
            {
                if (arr[i][j]!=0)
                {
                    notlower=1;
                }
                
            }
            
        }
        printf("\n");
    }
    
    if (notlower==1)
    {
        printf("\n The arr matrix not a upper triangle matrix\t %d",notlower);
    }
    else
    {
        printf("The matrix is a upper triangle matrix");
    }
    



 return 0;
}