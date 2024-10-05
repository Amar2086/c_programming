#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	 int num;
	 scanf("%d",&num);
     

	 if(num%2==0)
	 goto even;
	 else
	 goto odd;

	 
	 even:
	  printf("This number is even");
	  exit(0);

	  odd :
	  printf("The Number is odd ");
	  exit(0);



 return 0;
}