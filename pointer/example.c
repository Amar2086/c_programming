#include<stdio.h>

int main()
{
     double var=10;
     double *ptr =&var;

     printf("%p",ptr);  // It will print the address of that variable "var"
     printf("\n%lf\n",var); // Now it'll print the value of the variable  "var"
     printf("%lf", *ptr); //value in the address assigned  to ptr


 return 0;
}