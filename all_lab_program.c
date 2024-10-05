//lab-1

//calculating area of a circle
#include <stdio.h>
#define pi 3.1416

int main(void)
{
    int r;
    printf("Enter the radius of your circle:");
    scanf("%d", &r);
    float area=pi*r*r;
    printf("Area=%.3f", area);
return 0;
}


//area of a square
#include <stdio.h>
int main(void)
{
    float side, area;
    printf("Enter side length of your square:");
    scanf("%f", &side);
    area=side*side;
    printf("Area=%.3f", area);
    return 0;
}


//a special area with square and circle
#include <stdio.h>
#define pi 3.1416
int main(void)
{
    float side,radius,area;
    printf("Enter side length of your square:");
    scanf("%f", &side);
    printf("Enter the radius of your circle:");
    scanf("%f", &radius);
    area=side*side-pi*radius*radius;
    printf("Area=%.2f",area);
    return 0;
}


//swapping 2 variable with 3rd temporary variabe
#include <stdio.h>
int main(void)
{
    int num1,num2,temp;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);
    printf("Before swapping your 1st number is %d\n", num1);
    printf("Before swapping your 2nd number is %d\n", num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapping your 1st number is %d\n", num1);
    printf("After swapping your 2nd number is %d\n", num2);
    return 0;
}

//variable swapping without temporary variable
#include <stdio.h>
int main(void)
{
    int num1,num2,temp;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);
    printf("Before swapping your 1st number is %d\n", num1);
    printf("Before swapping your 2nd number is %d\n", num2);

   num1 = (num1+num2)-(num2=num1);

    printf("After swapping your 1st number is %d\n", num1);
    printf("After swapping your 2nd number is %d\n", num2);
    return 0;
}


//converting temparature centrigrade & fahreheit
#include <stdio.h>
int main(void)
{
    float centigrade, fahrenheit;
    int num;
    printf("what convertion do you want?\n");
    printf("1. Fahrenheit to Centigrade\n2. Centigrade to Fahrenheit\n");
    printf("-");
    scanf("%d",&num);
    if(num==1){
        printf("Enter temperature in fahrenheit:");
        scanf("%f", &fahrenheit);
        centigrade=(fahrenheit-32)*5/9;
        printf("Temperature in centrigrade is %.2f:", centigrade);
    }
    else if(num==2)
    {
        printf("Enter temperature in centrigrade:");
        scanf("%f", &centigrade);
        fahrenheit=32+(centigrade*9/5);
        printf("Temperature in fahrenheit is %.2f:", fahrenheit);
    }
    else{
        printf("EROR OPERATION");
    }
    return 0;
}




//lab-2

//logical AND (&&)
#include <stdio.h>
int main(void)
{
    int result;
    result=5<6 && 6>3;
    printf("Result=%d", result);
    return 0;
}


//logical OR (||)
#include <stdio.h>
int main(void)
{
    int result;
    result=5<6 || 6>3;
    printf("Result=%d", result);
    return 0;
}


//non-logical NOT operation
#include <stdio.h>
int main(void)
{
    int result;
    result=~45;
    printf("Result=%d", result);
    return 0;
}


//all non-logical operation
#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f,g,h;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);

    c=a&b;
    d=a|b;
    e=~a;          //NOT
    f=a^b;         //X-OR
    g=a<<2;
    h=b>>4;
    printf("c=%d, d=%d, e=%d, f=%d, g=%d, h=%d", c,d,e,f,g,h);
    return 0;
}


//year, day, month
#include <stdio.h>
int main(void)
{
    int year, day, month;
    printf("Enter year:");
    scanf("%d", &year);
    day=year/365;
    day=year%365;
    month=day/30;
    day=day%30;
    printf("%d Year, %d month, %d day", year, month, day);
    return 0;
}






//lab-3

//increment decrement
#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter a value:");
    scanf("%d", &a);
    printf("Enter b value:");
    scanf("%d", &b);
    c= a++ + --b;
    printf("a=%d, b=%d, c=%d", a,b,c);
    return 0;
}


//even or odd
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    if(num%2 == 0)
        printf("Your number is even");
    else
        printf("Your number is odd");
    return 0;
}

////boy girl marriage
#include<stdio.h>
int main(void)
{
    int boy_age, girl_age;
    printf("Enter boys age:");
    scanf("%d", &boy_age);
    printf("Enter girls age:");
    scanf("%d", &girl_age);

    if(boy_age>=21){
        if(girl_age>=18)
        printf("Marriage is possible.");
        else
        printf("Girl is under age.");
    }
    else
    printf("Boy is under age.");
}


////boy girl marriage(shortcut)
#include<stdio.h>
int main(void)
{
    int boy_age, girl_age;
    printf("Enter boys age:");
    scanf("%d", &boy_age);
    printf("Enter girls age:");
    scanf("%d", &girl_age);

    if(boy_age>=21 && girl_age>=18)
        printf("Marriage is possible");
    else
    printf("Marriage is not possible.");
}


////maximum
#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    if(num1>num2)
        printf("1st number is maximum");
    else
    printf("2nd number is maximum");
}


//job eligibility
 #include<stdio.h>
 int main(void)
 {
     int age;
     float cgpa;
     printf("Enter your age:");
     scanf("%d", &age);
     printf("Enter your cgpa:");
     scanf("%f", &cgpa);

     if(age<=35 && cgpa>=3.5)
         printf("You are eligible for this job");
     else
     printf("You are not eligible for this job");
 }



//lab-4

////bigger, smaller
#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    if(num1>num2)
        printf("1st number is bigger.");
    else if(num1==num2)
        printf("Both number are equal");
    else
        printf("2nd number is bigger");
}


////marks , grade
#include <stdio.h>
int main(void)
{ int m;
   printf("Enter your mark: ");
   scanf("%d", &m);
    if(m > 100)
      printf("NOT POSSIBLE");
    else if(m >= 80)
      printf("Your grade is: A+");
    else if(m>= 70 && m<80)
      printf("Your grade is:A");
    else if(m >= 60 && m<70)
      printf("Your grade is:B");
    else if(m >= 50 && m<60)
     printf("Your grade is:C");
    else if(m >= 40 && m<50)
     printf("Your grade is:D");
    else if(m<40)
     printf("Your grade is:F");
return 0;
}


////natural number for loop
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter num value:");
    scanf("%d", &num);

    for(int i=0; i<=num; ++i)
        printf("%d ",i);
}


////even number for loop
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter num value:");
    scanf("%d", &num);

    for(int i=2; i<=num; i=i+2)
        printf("%d ",i);
}

////odd numbers for loop
#include<stdio.h>
int main(void)
{
    int num;
   printf("Enter num value:");
    scanf("%d", &num);

    for(int i=1; i<=num; i=i+2)
       printf("%d ",i);
}


////natural number sum
 #include<stdio.h>
 int main(void)
 {
     int i,sum=0,num;
     printf("Enter num:");
     scanf("%d", &num);

     for(i=1; i<=num; ++i){
        sum=sum+i;
     }
     printf("Sum=%d", sum);
 }


////squared even numbers
#include<stdio.h>
int main(void){
    int num,sum=0;
    printf("Enter num:");
    scanf("%d", &num);
    for(int i=2; i<=num; i=i+2)
    {
        sum=sum+i*i;
    }
    printf("Sum=%d", sum);
}


////cubed natural numbers
#include<stdio.h>
int main(void){
    int num,sum=0;
    printf("Enter num:");
    scanf("%d", &num);
    for(int i=1; i<=num; ++i)
    {
        sum=sum+i*i*i;
    }
    printf("Sum=%d", sum);
}


////number table
#include<stdio.h>
int main(void){
    int num,sum,i;
    printf("Which number table you want to see?\n");
    printf("-->");
    scanf("%d", &num);
    for(i=1; i<=10; ++i)
    {
        sum=num*i;
        printf("%d*%d=%d\n", num,i,sum);
    }

}


//lab-5

////right triangle pattern
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}


////inverted right triangle pattern
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++){
            printf("*");
        }
        printf("\n");
    }
}


////triangle pattern
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}


////inverted triangle
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=2; j<=i; j++){
            printf(" ");
        }
        for(j=1; j<=2*(n-i)+1; j++){
            printf("*");
        }
        printf("\n");
    }
}


////square
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            printf(" * ");
        }
        printf("\n");
    }
}


////hollowed square
#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n value:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            if(i==1||i==n || j==1||j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

////factorial
#include<stdio.h>
int main(void)
{
    int num,fact=1,i;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d", num, fact);
}



//lab-6

////fibonacci series
#include <stdio.h>

int main(void) {
    int term1 = 0, term2 = 1, next_term, num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d, %d, ", term1, term2);


    while (next_term<=num) {
        next_term = term1 + term2;
        printf("%d, ", next_term);
        term1 = term2;
        term2 = next_term;
    }
}



//reverse
#include<stdio.h>
int main(void){
    int num, reminder, reverse=0;
    printf("Enter a number:");
    scanf("%d", &num);

    while(num!=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }
    printf("Reverse of this number is %d", reverse);
}



//count digit(using while loop)
#include<stdio.h>
int main(void)
{
    int num, count=0;
    printf("Enter a number:");
    scanf("%d", &num);

    while(num!=0){
        num=num/10;
        count++;
    }
    printf("This number has %d digits", count);
}




//count digits using for loop
#include<stdio.h>
int main(void){
    int num, i;
    printf("Enter a number:");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        num=num/10;
    }
    printf("This number has %d digits", i);
}


//Adding digits
#include<stdio.h>
int main(void){
    int num, count, reminder;
    printf("Enter a number:");
    scanf("%d", &num);

    int sum=0;
    while(num!=0){
        reminder=num%10;
        sum=sum+reminder;
        num=num/10;
    }
    printf("After adding all the digits the sum is %d", sum);
}


//palindrome
#include<stdio.h>
int main(void){
    int num, reverse=0, reminder;
    printf("Enter a number:");
    scanf("%d", &num);

    int updated_num=num;    //this means you are storing the input num value intside updated_num.
    while(num!=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }
    if(reverse==updated_num) //here if you write reverse==num then this would not work. because of while loop value of num is 0 now.
                            //this means that the input num and this num we used in if condition does not have the same value.
                            //so you have to store the input num value in a variable. i stored it inside this updated_num variable.
        printf("This is a palindrome number.");
    else
        printf("This is not a palindrome number.");
}


//perfect number
#include<stdio.h>
int main(void){
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i=1; i<num; i++){
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
    printf("This is a perfect number.");
    else
    printf("This is not a perfect number");
}


//prime number
#include<stdio.h>
int main(void){
    int num, state=1;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i=2; i<num; i++){
        if(num%i==0){
            state=0;    //state=0 means false for prime number
            break;
        }
        else
        state=1;  //state= 1 means true for prime number.
    }
    if(state==1)
    printf("This is a prime number");
    else if(state==0)
    printf("This is not a prime number");

}




