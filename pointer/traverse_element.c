#include<conio.h>
#include<stdio.h>
int traverseArr(int *arr2 )
{
    int n=3,m=2;

    for (int  i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j <m ; j++)
        {
            /* code */
            printf("%d ",*(arr2 + i*m + j));
        }
        printf("\n");
    }
    
}
int main()
{
     int arr1[5]={1,2,3,4,5};
     int (*ptr1)[5]=&arr1;
     int *ptr2;
     ptr2=arr1;
     int arr2[3][2]={
        {1,2},
        {3,4},
        {5,6}
     };

     for(int  i = 0; i < 5; i++)
     {
        printf("%d ", (*ptr1)[i]);
     }
     printf("\n");
     for (int  i = 0; i < 5; i++)
     {
        /* code */
        printf("%d ",*ptr2 );
        ptr2++;
     }
     printf("\n");

     traverseArr(*arr2);
     
     

 return 0;
}