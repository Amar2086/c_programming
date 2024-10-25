#include<stdio.h>
#include<string.h>

struct anonymous
{
    int day;
    /* data */
    union
    {
        /* data */
        int id;
        char name[50];
    };

    struct 
    {
        /* data */
        int roll;
        int age;
        
    };
    
    
};

int main()
{
     struct anonymous data1;
     data1.day=23;
     data1.age=21;
     data1.id=23132;
     strcpy(data1.name,"omar");


     printf("%d",data1.age);
     printf("\n %d",data1.roll);
     printf("%c",data1.name);


 return 0;
}