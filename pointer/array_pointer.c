#include<stdio.h>

int main()
{
     int arr[5]={1,2,3,4,5};
     int *ptr=arr; //arr is equivalent to arr[0]
     int (*ptr2)[5]=&arr;  // The address of the whole array
     printf("%d\t%d",*ptr,ptr[0]);  //oupput :1
     printf("\n%d",arr[0]);   //oupput :1
     printf("\n%d\n",ptr[3]);
     printf("%d",*(ptr+1));   //oupput :2   Pointer Arithmetic with Arrays
     printf("\n%d\t%d",(*ptr2)[2],(*ptr2)[3]);
     
    int a=10 ,b=20,c=30;
    int *arr2[]={&a,&b,&c};

    printf("\n%d\n",*arr2[2]); // output 30
    printf("%d",*arr2); // output 6421996 . For Explaination go down.
    printf("\n%d\n",*arr2[0]); // output 10
    printf("%d\n",**arr2); // output 10
    
    int arr3[3][2]={{1,2},{3,4},{5,6}};
    int (*ptr3)[2]=arr3;
    printf("%d\t%d\t%d\t%d\n",(*ptr3),(*ptr3)[0],*(*ptr3),*(*(ptr3)+1)); // first  output is the address of the first row . Second, third and fourth output will be 1.
    printf("%d\t%d\n",(*ptr3)[1],*(*(ptr3)+1)); // output 2 for both
    printf("%d\t%d\n",ptr3[1][1],*(*(ptr3+1)+1)); //output 4 for both
    /*
    *(*(ptr + 1) + 1)
    ptr + 1 moves the pointer to the second row (arr[1]).
    *(ptr + 1) dereferences it to get the array (arr[1]).
    *(ptr + 1) + 1 moves to the second element of that row.
    Finally, *(*(ptr + 1) + 1) dereferences the second element in the second row, giving the same result as ptr[1][1].
    */
   ptr3++; // has been shifted to the second row
   printf("%d\t%d\n",*(*ptr3),(*ptr3)[1]); //output 3:the first element of the second row. output 4: 2nd element of the second row
   printf("%d\n",*(*(ptr3+1)));

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

int (*ptr4)[3][4] = arr4;  // Pointer to an array of 3x4 integers
printf("%d\n", (**ptr4) [2]); //output 3
printf("%d\n", (*ptr4) [2]);  //memory address of the first row
printf("%d\n", (*ptr4+1)[1][2]); //output 11
printf("%d\n", (*ptr4)[1][2]);  // Outputs: 7 (second row, third element in the first 3x4 block)
printf("%d\n", (*ptr4+2)[0][2]); //output 11
printf("%d\n", (*(ptr4+1))[1][2]); //output 19
printf("%d\n",*(*(*(ptr4)))); //output 1
printf("%d\n",*(*(*(ptr4+1)))); // output 13
printf("%d\n",*(*(*(ptr4+1)+1))); //output 17
printf("%d\n",*(*(*(ptr4+1)+2))); //output 21
printf("%d\n",*(*(*(ptr4+1)+1)+1)); //output 18
ptr4++;  // Moves to the second 3x4 block
printf("%d\n", (*ptr4)[0][0]);  // Outputs: 13 (first element of the second block)
printf("%d",*(*(*(ptr4)))); //output 13

 return 0;
}
/*
Key Concept: Array of Pointers
In C, arrays and pointers are closely related, but there are key differences, especially when dereferencing.

Array of Pointers:

<code>
int *arr[] = {&a, &b, &c};
</code>
arr is an array of pointers to integers, meaning arr[0], arr[1], and arr[2] are pointers to a, b, and c, respectively.
Specifically:
arr[0] holds &a, the address of a.
arr[1] holds &b, the address of b.
arr[2] holds &c, the address of c.
How arr and arr[0] are interpreted:

arr[0]: This expression directly accesses the first element in the array, which is &a. So, when you dereference it with *arr[0], it gives the value of a.
*arr[0] → dereferences &a → gives 10.
arr[1]: Similarly, arr[1] holds &b. So *arr[1] dereferences &b and gives 20.
*arr[1] → dereferences &b → gives 20.
Dereferencing arr:

Now, when you write *arr, it's different from arr[0].
arr itself is the name of the array, and the name of an array in C decays to a pointer to its first element.
So, arr is equivalent to &arr[0], which means it's a pointer to the first element of the array, i.e., a pointer to &a.
When you dereference arr with *arr, you're dereferencing the pointer to &a, which gives &a.
*arr → dereferences &arr[0] → gives &a (the address of a).
Why *arr gives &a but not the value of a:

arr is a pointer to the first element of the array, not the first element itself. So *arr gives the first element of the array, which is &a.
To get the value of a, you need to dereference twice:
**arr → *(*arr) → dereferences &a to give a, which is 10.
Why arr[0] works differently:

arr[0] is already the first element of the array, which is &a. So, when you write arr[0], you're directly accessing the first pointer (which is &a), and dereferencing arr[0] (*arr[0]) gives 10.
Summary:
arr is a pointer to the first element of the array, i.e., a pointer to &a.
So, *arr gives &a, not a.
arr[0] is the first element of the array, which is &a.
So, *arr[0] gives a.
Solution:
To get the value of a using arr, you need to dereference it twice:


printf("%d\n", **arr);  // Outputs 10 (value of a)
I hope this clarifies the difference between arr, arr[0], and *arr! Let me know if you'd like more examples.
*/