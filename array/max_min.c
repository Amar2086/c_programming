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
     }
     max = array[0];
     min = array[0];
     for(int i=1; i<n; i++)
     {
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
     }
     printf("Maximum: %d\n",max);
     printf("Minimum: %d\n",min);
     
 return 0;
}