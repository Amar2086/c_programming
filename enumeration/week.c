#include<stdio.h>

typedef enum week
{
    saturday=45,
    sunday,
    monday=60,
    tuesday,
    wednesday,
    thursday=70,
    friday
};

 int main()
{
    enum week today,tomorrow;
    today=tuesday, tomorrow=friday;
    printf("%d \n %d",today, friday);

    return 0;
}