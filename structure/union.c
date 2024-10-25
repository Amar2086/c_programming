#include<stdio.h>

typedef union student_A
{
    int roll;
    int age ;
    char name[50];
}form_a;

int main()
{
    
     //the size of the union is equal to the highest array size
     printf("size of the union is %d bytes",sizeof(form_a));

     form_a omar;
     omar.age=20;
     printf("\nThe age of omar is %d",omar.age);
     omar.roll=12;
     printf("\n Now The age of omar is %d",omar.age); //union can hold only one value.

 return 0;
}