#include<stdio.h>

int main()
{
     int size,temp=0;
     scanf("%d",&size);
     int arr[size];
     for (int  i = 0; i < size; i++)
     {
        scanf("%d",&arr[i]);
     }
     int *ptr=arr;
     for (int  i = 0; i < size-1; i++)
     {
        for (int  j = 0; j < size-i-1; j++)
        {
            if (*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j+1);
                *(ptr+j+1)=*(ptr+j);
                *(ptr+j)=temp;
            }
            
        }
        
     }
     for (int  i = 0; i < size; i++)
     {
        printf("\t%d\n",arr[i]);
     }
     
 return 0;
}