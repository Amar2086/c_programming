#include<conio.h>
#include<stdio.h>


struct laptop
{
    char name[50];
    int ram;
    int rom;
};

struct student_a
{
    /* data */
    char name[50];
    int roll;
    int age;
    struct laptop form_a ;

};



int main()
{
    struct student_a nafees={"codemaster",12,21,"gigabyte aurous",16,926};
    printf("The laptop used by the %s is %s",nafees.name,nafees.form_a.name);//if i want to print the name of the laptop
    printf("\nIts rom is%d GB",nafees.form_a.rom);

 return 0;
}