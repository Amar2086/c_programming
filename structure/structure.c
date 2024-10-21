#include<conio.h>
#include<stdio.h>
#include <string.h>

struct member
{
    /* data */
    char id[50];
    int age;
    int roll;
};

struct cake
{
    /* data */
    char flavor[50];
    int price;
    int store;
};


int main()
{
     struct student
     {
        /* data */
        char name[50];
        int age;
        int roll;
     };
    struct member zobayer;
    strcpy(zobayer.id,"EHH23JHS23ED");
    zobayer.age=21;
    zobayer.roll=12;
    

     struct student omar={"omar",20,12}; //initializing with array and the value have to be given respectfully
     struct cake for_omar={.flavor="chocolate",.store=2,.price=500};
     printf("%s",omar.name);
     printf("\n%d",omar.age);
     printf("\n%s",zobayer.id);

     
     

 return 0;
}