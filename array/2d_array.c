#include<conio.h>
#include<stdio.h>

int main()
{
     int arr[2][3]={34,45,56,45,67,45};
     int sum=0;

     for (int  i = 0; i < 2; i++)
     {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",arr[i][j]);
            sum+=arr[i][j];   //we can also get the sum of the element
        }
        printf("\n");
     }

     // How to access to array
     printf("%d\n%d",arr[0][2],arr[1][1]);  // for 56 in the first row and 67 in the second row

     printf("\nthe sum of the element of the array is %d", sum);

    
     
     

 return 0;
}