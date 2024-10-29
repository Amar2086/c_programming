#include<stdio.h>
#include<stdlib.h>

int main()
{
     int n;
     scanf("%d",&n);
     int *arr;
     arr=(int*) malloc(n*sizeof(int));
     if(arr==NULL)
     {
        printf("Memory Allocation is failed ");
     }
     for (int i = 0; i < n; i++)
     {
        /* code */
        arr[i]=i*2;
        printf("%d\n",arr[i]);        
     }
     
     free(arr);
     arr=NULL;
     arr=(int*)malloc(n*2*sizeof(int));
     if (arr==NULL)
     {
        /* code */
        printf("Memory allocation failed");
     }
     for (int i = 0; i < n*2; i++)
     {
        /* code */
        arr[i]=i*3+2;
        printf("\t%d\n",arr[i]);
     }
     free(arr);
     arr=NULL;
     
     

return 0;
}