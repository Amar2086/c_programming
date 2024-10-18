//all the ways to determine the length of the array
#include<stdio.h>

int main()
{
     int arr[]={1,2,3,4,5};
     int count=0;
     int length1= sizeof(arr)/sizeof(arr[0]); //sizeof operator
     int length2=*(&arr+1)-arr; //pointer
     for (int  i = 0; arr[i]!='\0'; i++)
     {
        /* code */
        count++;
     }
     int length3= count;
     printf("%d\n",length1);
     printf("%d\n",length2);
     printf("%d",length3);

     //all are the length of the same array. So , they are the same.

 return 0;
}