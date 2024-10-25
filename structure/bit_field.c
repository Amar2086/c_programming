#include<stdio.h>

typedef struct bit_field1
{
    /* data */
    unsigned int day;
    unsigned int month;
    unsigned int year;
    
}date1 ;
typedef struct bit_field2
{
    /* data */
    unsigned int day:5;
    unsigned int momth:4;
    unsigned int year ;
}date2 ;

int main()
{
     //size of structure without the bit field
     printf("The size of the structure without the bit field is %d",sizeof(date1));
     //size of the sructure with the bit field 
     printf("\nThe size of the structure with the bit field is %d",sizeof(date2));
    // bit  field is not allowed for array

 return 0;
}