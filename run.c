#include<stdio.h>

int main()
{
   int arr4[2][3][4] = {
    {
       {1, 2, 3, 4},
        {5, 6, 7, 8}, 
        {9, 10, 11, 12} 
    },
    {
       {13, 14, 15, 16}, 
       {17, 18, 19, 20}, 
       {21, 22, 23, 24} 
    }
};

int (*ptr4)[3][4] = arr4;
printf("%d\n", (*ptr4) [2]);  // Pointer to an array of 3x4 integers
printf("%d\n", (**ptr4) [2]); 
printf("%d\n", (*ptr4+1)[1][2]); 
printf("%d\n", (*ptr4)[1][2]);  // Outputs: 11 (second row, third element in the first 3x4 block)
printf("%d\n", (*ptr4+2)[0][2]); 
printf("%d\n", (*(ptr4+1))[1][2]); 
printf("%d\n",*(*(*(ptr4))));
printf("%d\n",*(*(*(ptr4+1))));
printf("%d\n",*(*(*(ptr4+1)+1)));
printf("%d\n",*(*(*(ptr4+1)+2)));
printf("%d\n",*(*(*(ptr4+1)+1)+1));
ptr4++;  // Moves to the second 3x4 block
printf("%d\n", (*ptr4)[0][0]);  // Outputs: 13 (first element of the second block)
printf("%d",*(*(*(ptr4))));

 return 0;
}