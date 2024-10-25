#include<conio.h>
#include<stdio.h>

struct student
{
    /* data */
    char name[50];
    int roll;
};

int main()
{
     struct student student_1={"omar",12};
     struct student *tamim=&student_1;
     puts(tamim->name);
     printf("%d",tamim->roll);
     

 return 0;
}