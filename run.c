#include<conio.h>
#include<stdio.h>

int main()
{
     int arr[3] = {10, 20, 30};
int *ptr = arr;
printf("%d\n", *ptr);    // Outputs 10
ptr++;                   // Move to the next integer in the array
printf("%d\n", *ptr);    // Outputs 20


 return 0;
}