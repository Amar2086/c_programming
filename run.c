<<<<<<< HEAD
#include <stdio.h>
void fun(int* arr,unsigned int n)
{
    int i;
    
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
}

// Driver program
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    fun(arr,n);
    return 0;
}
=======
#include<conio.h>
#include<stdio.h>

int main()
{
     int n, array[100],max,min;
    
     printf("Enter the number of elements: ");
     scanf("%d",&n);
     printf("Enter %d integers: ",n);
     for(int i=0; i<n; i++)
     {
        scanf("%d",&array[i]);
         max = array[0];
     min = array[0];
            if(array[i] > max)
            max = array[i];
       if(array[i]<min)
            min = array[i];
     }
     
     
     
     
    
     printf("Maximum: %d\n",max);
     printf("Minimum: %d\n",min);
     
 return 0;
}
>>>>>>> 6cd76291c8d7ec9f9046b2682888ab5cd8d65c81
