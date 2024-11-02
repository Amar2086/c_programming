#include<stdio.h>
#include<stdlib.h>

   struct student_info
     {
        int id;
        char name[100];
        float grade;
     };
     

int main()
{
  struct student_info *form_a= (struct student_info *)malloc(sizeof(struct student_info));

  if (form_a ==NULL)
  {
    printf("Dynamic memory Allocation failed ");
  }
 form_a->id=123;
 form_a->grade=3.45;
 snprintf(form_a->name,sizeof(form_a->name),"omar");


 printf("%f\n%d\n%s",form_a->grade,form_a->id,form_a->name);

return 0;
}