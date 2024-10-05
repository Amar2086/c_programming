#include<conio.h>
#include<stdio.h>

int i;

void findelement(int arr[],int size,int key)
{
    
    for(i=0;i< size ;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at the position is %d  ",i+1);
            break;
        }
    }
}


int main()
{
     int arr[]={1,2,3,4,5,6};

     int n=6;
     int key=6;

     findelement(arr,n,key);

 return 0;
}