#include<stdio.h>

 
int main()
{
    typedef struct 
     {
        /* data */
        int age;
        char name[30];
        int roll;
        double registration;
     }student;


     student omar ={20,"omar",12,234323234234};
    printf("%d",omar.age);
     

 return 0;
}