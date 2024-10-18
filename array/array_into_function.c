#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void function_array(int arr[], int size) 
{
    printf("The size of the array is %d bytes\n",sizeof(arr)); //it will print the size of addresses of the array.
    
    for(int i = 0; i < size; i++)
    {
       printf("%d ",arr[i]);   
    }
}
void string_array(char *arrchar)
{
    int i=0;
    while(arrchar[i] != '\0')
    {
        printf("%c ",arrchar[i]);
        i++;
    }
}
void array_2d_print(int arr2[][3])
{
    int m=3,n=3;
    for (int  i = 0; i < m; i++)
    {
        /* code */
        for (int  j = 0;j < n; j++)
        {
            /* code */
            printf("%d ",arr2[i][j]);
        }
        
    }
    
}
void array_with_pointer(int *arr2,int m,int n)
{
    for (int  i = 0; i < m; i++)
    {
        /* code */
        for (int  j = 0; j < n; j++)
        {
            /* code */
            printf("%d ",*((arr2+i*n)+j));
        }
        
    }
}
void array_with_pointer2(int (*arr2)[3])
{
  for (int  i = 0; i < 3; i++)
  {
    /* code */
    for (int j = 0; j  < 3; j++)
    {
        /* code */
        printf("%d ",arr2[i][j]);
    }
    
  }
  
}

int main()
{
     int arr[5]={1,2,3,4,5};
     int size= sizeof(arr)/sizeof(arr[0]);
     char arrchar[]="string";
     int arr2[3][3]={1,2,3,4,5,6,7,8,9};
     int m=3,n=3;

     printf("The size of the array in the main function is %d bytes \n",sizeof(arr));

     function_array(arr,size);
     printf("\n");
     string_array(arrchar);
     printf("\n");
     array_2d_print(arr2);
     printf("\n");
     array_with_pointer(arr2,m,n);
     printf("\n");
     array_with_pointer2(arr2);

 return 0;
}