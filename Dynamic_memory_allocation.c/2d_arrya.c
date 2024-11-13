#include<stdio.h>
#include<stdlib.h>

int main()
{
     int row =3,column=4;
     int *ptr=malloc((row*column)*sizeof(int));

     for (int  i = 0; i < row*column; i++)
     {
        ptr[i]=i*12-12;
     }
     for (int  i = 0; i < row; i++)
     {
        /* code */
        for (int j = 0; j < column; j++)
        {
            printf("%d\t",ptr[i*column+j]);
        }
        printf("\n");
     }
     free(ptr);
 return 0;
}