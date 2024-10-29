#include<stdio.h>
#include<stdlib.h>

int main()
{
     int *ptr;

     ptr=(int*) malloc(5*sizeof(int));
     if (ptr==NULL)
     {
        /* code */
        printf("Dynamic memory allocation failed ");
        return 1;
     }

     for (int i = 0; i < 5; i++)
     {
        /* code */
        ptr[i]=i*2;
        printf("\n\t%d",ptr[i]);
     }
     printf("\n");
     ptr=(int*)calloc(5,sizeof(int));
     if (ptr==NULL)
     {
        /* code */
        printf("Contiguous memory allocation Failed");

        return 1;
     }
     

     for (int  i = 0; i < 5; i++)
     {
        /* code */
        printf("\n\t\t%d",ptr[i]);
     }
      printf("\n");    
     ptr=(int *)realloc(ptr,10*sizeof(int));
     if (ptr==NULL)
     {
        /* code */
        printf("Memory reallocation is failed ");
     }
     
     for (int  i = 0; i < 10; i++)
     {
        /* code */
        ptr[i]=i*3;
        printf("\n\t\t\t%d",ptr[i]);
     }
     
     free(ptr);
     ptr=NULL;//Prevent the Memory leak. 

 return 0;
}